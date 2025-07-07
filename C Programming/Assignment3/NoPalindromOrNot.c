#include<stdio.h>
int main(){

int num,temp,rem=0,digit;
printf("Enter the number: ");
scanf("%d",&num);
temp=num;

while (num>0){
	digit=num%10;
	rem=rem*10+digit;
	num=num/10;
}

if(rem==temp){
	printf("Number is Palindrome");
}else{
	printf("Number is not palindrome");
}
}