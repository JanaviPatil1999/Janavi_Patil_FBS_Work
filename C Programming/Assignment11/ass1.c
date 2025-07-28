#include<stdio.h>
//Write a program to scan string from user then scan a single character and search it
//in a accepted string.
int main(){
	char str[100],ch;
	int found=0;
	
	printf("Enter the string: ");
	scanf("%s",&str);
	
	printf("\nEnter the character: ");
	scanf(" %c",&ch);
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==ch){
			found=0;
			printf("\nCharacter is found at index %d",i);
		}	
	}
	if(!found)
		printf("\nNot found in string"); 
}
	
