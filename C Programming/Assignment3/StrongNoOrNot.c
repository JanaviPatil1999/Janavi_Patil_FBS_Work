#include<stdio.h>

int main()
{
	int num,original,fact,sum=0,rem,count;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	original=num;
	while (num>0){
		
		rem=num%10;
		
		count=1;
		fact=1;
		while(count<=rem){
			fact=fact*count;
			count++;
		}
		printf("Factorial of number : %d is: %d\n",rem,fact);
		sum=sum+fact;
		num=num/10;
		
	}
	
	if(sum==original){
		printf("Strong Number");
	}
	else{
		printf("Number is not strong");
		
	}
	
}