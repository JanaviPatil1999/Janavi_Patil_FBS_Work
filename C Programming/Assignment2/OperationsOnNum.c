#include<stdio.h>
int main(){

int n1,n2,result;
char ope;

printf("Enter the two Numbers: ");
scanf("%d %d",&n1,&n2);
printf("Enter the operator to perform operation '+,-,%%,/,*,'\n");
scanf(" %c",&ope);
if(ope=='+'){
	result=n1+n2;
	printf("Addition of n1 and n2 is: %d ",result);
} 
else if(ope=='-'){
    printf("Subtraction of n1 and n2 is: %d",n1-n2);
}
else if(ope=='*'){
	printf("Multiplicaiton of n1 and n2 is: %d",n1*n2);
}
else if(ope=='%'){
	printf("Modulous of n1 and n2 is: %d",n1%n2);
}
else if(ope=='/'){
	printf("Division of n1 and n2 is: %d",n1/n2);
}
else{
	printf("Enter valid operator");
}
}
