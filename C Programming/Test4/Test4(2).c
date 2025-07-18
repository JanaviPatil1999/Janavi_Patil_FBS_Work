#include<stdio.h>
int main(){
//Write a program to find power of any number 
//E.g 2^4=16

int num,pow;
printf("Enter the number : ");
scanf("%d",&num);
printf("Enter power: ");
scanf("%d",&pow);

int result=power(num,pow);	
printf("result: %d",result);
}

int power(int num,int pow){
	
	int power=1;
	int count=1	;
	while(count<=pow){
		power=power*num;
		count++;
	}
	return power;
}