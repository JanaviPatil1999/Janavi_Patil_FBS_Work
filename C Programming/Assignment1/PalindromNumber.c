#include<stdio.h>
int main(){
	int num,reverse,digit,ori;
	printf("Enter 3 digit number:" );
	scanf("%d",&num);
	if(num>=100 && num<=999)
	{
		ori=num;
	while(num!=0){
	
		digit=num%10;
		reverse=reverse*10+digit;
		num=num/10;
	}
	
		if(ori== reverse){
		printf("The number is palindrome");
	}
	
	else{
		printf("The number is not palindrom");
	}
	
	}
	else{
		printf("Enter the valid number");
	}
	

}