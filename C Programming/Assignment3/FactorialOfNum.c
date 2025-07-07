#include<stdio.h>
int main(){

int num,fact=1;

printf("Enter thr number: ");
scanf("%d",&num);

for(int i=1;i<=num;i++){
	fact*=i;
}

printf("Factorial of number is: %d",fact);
}