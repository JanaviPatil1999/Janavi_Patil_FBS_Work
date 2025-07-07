#include<stdio.h>

int main(){
	
	int num,rem=0,digit,lastno,firstno;
	
	printf("Enter The Number:" );
	scanf("%d",&num);
	lastno=num%10;
	
	while(num>=10){
		num=num/10;
	}
	firstno=num;
	
	printf("Addition of firstno and lastno: %d",firstno+lastno);
}