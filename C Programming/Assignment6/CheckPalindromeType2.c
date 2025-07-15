#include<stdio.h>
//2. Write a program to check given 3 digit number is pallindrome or not.
void CheckPalindrome(int num);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	CheckPalindrome(num);	
}
void CheckPalindrome(int num){
	int original,rem,sum=0;
	original=num;
	while(num>0){
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;	
	}
	if(original==sum){
		printf("\nNumber is Palindrome");
	}else{
		printf("Number is not palindrome");
	}
}