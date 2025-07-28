//WAP to Form a New String where the First Character and the Last Character have
//been Exchanged
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("\nEnter the string:");
	scanf("%s",str);
    
    int len=strlen(str);
    
    if(len>0){
    	int temp=str[0];
    	str[0]=str[len-1];
    	str[len-1]=temp;
	}
 printf("\nReverted string : %s",str);
}