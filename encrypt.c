#include <stdio.h>
#include <stdlib.h>

/*
 * This doesnt work without terminal input to select the encryption or decryption. 
 * It also requires manual input of the text to cipher
 */
int main(void){
	
int i,
   char message[1000]; //this is the cipher text
   int selection;//for the swtich 
   int key; //how much the code gets rotated
 
 printf("\nPlease enter text to cipher: ");
   gets(message); //Gets used as scanf doesnt recognise spaces
   
       printf("Select an option\n");
   printf("encrypt - 1\n");//goes to switch case
   printf("decrypt - 2\n");
   scanf("%d", &selection); //detects to decrypt or encrypt
   switch(selection)
{
      case 1:
      {
   
   printf("\nSelect key rotation:\n");
   scanf("%d", &key);
    for(i = 0; (i < 100 && message[i] != '\0'); i++) //for the array of message in terms of numerals
        message[i] = message[i] + key; //messageing as ascii rotated by numeral set by key 

      printf("\nEncrypted messageing: %s\n", message);
      break;
}
      case 2: 
      {
   printf("\nSelect key rotation:\n");
   scanf("%d", &key);
    for(i = 0; (i < 100 && message[i] != '\0'); i++)
        message[i] = message[i] - key; //taking away the key from the already encrypted text to decrypt
      printf("\nDecrypted messageing: %s\n", message);
      break;
}

}

   return(0);
}