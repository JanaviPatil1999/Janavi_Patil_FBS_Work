//8. WAP to Calculate the Number of Words Present in a String
#include<stdio.h>
int main(){
	char str[100];
	int i=0;
	
	
	printf("Enter string: ");
	scanf("%s",str);
	
	for(;str[i]!='\0';i++){
		i+=i;
	}
	i=i-1;
	
	printf("count of characters: %d",i);
	
}