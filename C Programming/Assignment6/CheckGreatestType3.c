#include<stdio.h>
//Write a program to find greatest of three numbers using nested if-else.
int GreatestNo();
int main(){
	int n=GreatestNo();
	printf("The greatest number between three of them are: %d",n);
}
int GreatestNo(){
	int a,b,c,result ;
	printf("Enter the number 1: ");
	scanf("%d",&a);
	printf("Enter the number 2: ");
	scanf("%d",&b);
	printf("Enter the number 3: ");
	scanf("%d",&c);
	
	if(a>b && a>c){
	result=a;	
	}else if(b>a && b>c){
		result=b;
	}else{
		result=c;
	}
	return result;
}