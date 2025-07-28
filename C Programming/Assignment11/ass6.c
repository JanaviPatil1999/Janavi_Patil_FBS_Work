//6. WAP to Take in a String and Replace Every Blank Space with special symbol.

#include<stdio.h>
int main(){
	char str[100];
	
	printf("Enter the string: ");
	scanf("%[^\n]",&str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			str[i]='@';
		}
	}
	printf("Replace string: %s",str);
}
