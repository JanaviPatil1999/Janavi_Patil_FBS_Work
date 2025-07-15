#include<stdio.h>
//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the opertions
int PerformOperation();
int main(){
	int result= PerformOperation();
	printf("The result of your operation is: %d",result);
}
int PerformOperation(){
	int no1,no2,result;
	char ch;
	printf("Enter the 1 st number: ");
	scanf("%d",&no1);
	printf("Enter the Second Number: ");
	scanf("%d",&no2);
	printf("Operation to Perform: ");
	scanf(" %c",&ch);
	
	if(ch=='+'){
	 result=no1+no2;
	}
	else if(ch == '-'){
		result=no1-no2;
	}else if(ch == '+'){
		result=no1+no2;
	}else if(ch == '*'){
		result=no1*no2;
	}else if(ch == '/'){
		result=no1/no2;
	}else if(ch == '%'){
		result=no1%no2;
	}else{
		printf("Invalid Operator");
	}
	
	return result;
}