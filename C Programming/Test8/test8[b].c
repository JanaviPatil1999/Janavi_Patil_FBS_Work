#include<stdio.h>
//user define reverse string function
int main(){
	char string[100]="janavi";
	
	//printf("Enter the string: ");
	//scanf("%s",&string);
	
	reverse(string);
}
void reverse(char str[]){
	int len=strlen(str);
	
	for(int i=len-1;i>=0;i--)
	{
		printf(" %c",str[i]);	
	}
	
}