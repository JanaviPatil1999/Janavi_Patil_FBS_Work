#include<stdio.h>
int main(){
	int start ,end,sum=0;
	
	printf("Enter the Range to add: ");
	scanf("%d%d",&start,&end);
	while(start<=end){
		sum+=start;
		start++;
	}
	printf("Sum is: %d",sum);
}