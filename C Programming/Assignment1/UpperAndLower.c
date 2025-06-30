#include<stdio.h>
int main(){

char ch;

printf("Enter the character : ");
scanf("%c",&ch);

if(ch>='A' && ch<='Z'){
	printf("The character is Upper Letter");
}
else if(ch>='a' && ch<='z'){
	printf("The character is Lower Letter");
}
else{
	printf("The enter letter is not alphabet");
}
}
