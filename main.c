#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void cipher(char* plainText, int key);

int main(void){
	
	int key = 1;
	char plainText[101];
	
	//hello
	printf("Please enter the text you want to encrypt: \n");
	

	
	fgets(plainText, sizeof(plainText), stdin);
	printf("You are encrypting: ");
	printf(plainText);
	printf("\nThe ciphered text is : ");
	

	cipher(plainText, key);

}

void cipher(char* plainText, int key){
	
	int i=0;
	int cypherValue;
	char cypher;
	
	while( plainText[i] != '\0'){//&& strlen(plainText)-1 > i{
		cypherValue = ((int)plainText[i] + key);
		cypher = (char)(cypherValue);
		
		printf("%c", cypher);
		i++;
	}
	printf("\n");
}