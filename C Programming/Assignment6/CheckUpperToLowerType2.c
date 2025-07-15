#include<stdio.h>
//6. Write a program to check whether a given character is uppercase or lowercase.
void UpperToLower(char ch);
int main(){
	char ch;
	printf("Enter the character to check Uppercase And Lowercase: ");
	scanf(" %c",&ch);
	UpperToLower(ch);
	
}
void UpperToLower(char ch){
	if(ch>='A' && ch<='Z'){
		printf("%c is Uppercase",ch);
	}else{
		printf("%c is Lowercase",ch);
	}

}