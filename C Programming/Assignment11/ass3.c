//3. WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>
int main(){
	char str[100];
	int idx;
	
	printf("\nEnter the sring: ");
	scanf("%s",&str);
	printf("\nEnter the index: ");
	scanf("%d",&idx);
	
	for(int i=idx;str[i]!='\0';i++){
		
			str[i]=str[i+1];		
	}
	printf("\n String after:%s",str);
}