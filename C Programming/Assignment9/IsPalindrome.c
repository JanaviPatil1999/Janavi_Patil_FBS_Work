#include<stdio.h>
void IsPalindrome();
int main(){
	//121
	IsPalindrome();

}
void IsPalindrome(){
	int num,original,sum=0,rem;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	original=num;
	while (num>0){
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	if(sum==original){
		printf("palindrome");
	}
	
}