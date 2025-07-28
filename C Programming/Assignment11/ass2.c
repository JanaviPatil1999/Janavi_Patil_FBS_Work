//WAP Replace all Occurrences of ‘a’ with $ in a String
#include<stdio.h>
int main(){
	char str[100],ch,re,found=0;
	
	printf("Enter the string: ");
	scanf("%s",&str);
	printf("Enter the Character you want to change: ");
	scanf(" %c",&ch);
	printf("Enter the replace character: ");
	scanf(" %c",&re);
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==ch){
			found=1;
			str[i]=re;
		}
	}if(found)
	    printf("modified string : %s",str);
	else if(!found){
		printf("character is not found");
	}
}