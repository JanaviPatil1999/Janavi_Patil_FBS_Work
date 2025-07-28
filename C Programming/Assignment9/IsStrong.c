#include<stdio.h>

void IsStrong(int n);
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	IsStrong(num);
}

void IsStrong(int n)
{
	int ori,rem,sum,strong=0;
	ori=n;
	while(n>0)
	{
	rem=n%10;
	sum=1;
	for(int i=1;i<=rem;i++)
	{
	sum=sum*i;
	}
	strong+=sum;
	n=n/10;
 }
 if(strong== ori){
 	printf("The number is Strong");
 }else{
 	printf("The number is not strong");
 }
	
}