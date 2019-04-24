#include <stdio.h>
#include <stdlib.h>


int main(void){
	
int i, x;
   char str[100];
   int choice;
   int key;

   printf("Select an option\n");
   printf("encrypt - 1\n");
   printf("decrypt - 2\n");
   scanf("%d", &choice);

   switch(choice)
{
      case 1:
      {
    printf("\nPlease enter text to encrypt:\n");
   scanf("%s", &str);
   printf("\nSelect key rotation:\n");
   scanf("%d", &key);
    for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + key; //the key for encryption is 3 that is added to ASCII value

      printf("\nEncrypted string: %s\n", str);
      break;
}
      case 2: 
      {
printf("\nPlease enter text to decrypt:\n");
   scanf("%s", &str);
   printf("\nSelect key rotation:\n");
   scanf("%d", &key);
    for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - key; //the key for encryption is 3 that is added to ASCII value

      printf("\nDecrypted string: %s\n", str);
      break;
}

}

   return(0);
}