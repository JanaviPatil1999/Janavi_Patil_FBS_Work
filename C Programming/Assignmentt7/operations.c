#include<stdio.h>
//performing operations
void Calculations(int*a,int*b);
int main(){
	int a,b;
	printf("Enter the number1: ",a);
	scanf("%d",&a);
	printf("Enter the number2: ",b);
	scanf("%d",&b);
	Calculations(&a,&b);
	
}
void Calculations(int*a,int*b){
	char ch;
	int result;
	printf("Enter the operations to perform(+,-,/,*,%): ");
	scanf(" %c",&ch);
	if(ch=='+'){
		result=*a+*b;
		printf("%u",result);
	}else if(ch=='-'){
		result=*a - *b;
		printf("%d",result);
	}else if(ch=='*'){
		result=*a * *b;
		printf("%d",result);
	}else if(ch=='/'){
		result=*a / *b;
		printf("%d",result);
	}else if(ch=='%'){
		result=*a % *b;
		printf("%d",result);
	}
	
}