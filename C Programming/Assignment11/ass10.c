//10. Write a program to check the string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int palindrome=0;
	
	printf("Enter string: ");
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0;i<len;i++){
		for(int j=len-1-i;j>=0;j--){
			if(str[i]!=str[j])
			{
			palindrome=1;
			break;
			}
		}
	}
	if(palindrome==0){
		printf("String is palindrome");
	}
	else{
		printf("string is not palindrome");
	}
}
//or you can also do 
//for(int i=0;i<len/2;i++)
//str[i]==str[len-1-i];