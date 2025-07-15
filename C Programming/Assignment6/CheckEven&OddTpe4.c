#include<stdio.h>
//1. Write a program to check whether a number is even or odd.
char CheckEvenOrOdd(int num);
int main(){
	int number;
	printf("Enter the number: ",number);
	scanf("%d",&number);
	char ch=CheckEvenOrOdd(number);
	if(ch=='e'){
		printf("Number is Even");
	}else{
		printf("Number is odd");
	}
}
char CheckEvenOrOdd(int num){
	char c;
	if(num%2==0){
		c='e';
	}else{
		c='o';
	}
	return c;
}