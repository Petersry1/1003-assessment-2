#include <stdio.h>
#include <stdlib.h>

/*
 * This doesnt work without terminal input to select the encryption or decryption. 
 * It also requires manual input of the text to cipher
 */
int main(void){
	
int i, x;
   char str[1000]; //this is the cipher text
   int choice;//for the swtich 
   int key; //how much the code gets rotated
 
 printf("\nPlease enter text to cipher: ");
   gets(str); //Gets used as scanf doesnt recognise spaces
   
       printf("Select an option\n");
   printf("encrypt - 1\n");//goes to switch case
   printf("decrypt - 2\n");
   scanf("%d", &choice); //detects to decrypt or encrypt
   switch(choice)
{
      case 1:
      {
   
   printf("\nSelect key rotation:\n");
   scanf("%d", &key);
    for(i = 0; (i < 100 && str[i] != '\0'); i++) //for the array of str in terms of numerals
        str[i] = str[i] + key; //string as ascii rotated by numeral set by key 

      printf("\nEncrypted string: %s\n", str);
      break;
}
      case 2: 
      {
   printf("\nSelect key rotation:\n");
   scanf("%d", &key);
    for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - key; //taking away the key from the already encrypted text to decrypt
      printf("\nDecrypted string: %s\n", str);
      break;
}

}

   return(0);
}