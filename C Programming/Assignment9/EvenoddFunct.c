#include<stdio.h>
void everORodd();
int main(){
	
	evenORodd();
}
void evenORodd(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("Number is Even");
	}else{
		printf("Number is odd");
	}
}