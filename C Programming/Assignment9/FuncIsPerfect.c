#include<stdio.h>
void IsPerfect(int n);

int main(){
	int num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	IsPerfect(num);
}

void IsPerfect(int n)
{
	int ori,rem,sum=0;
    ori=n;
    
    for(int i=1;i<n;i++)
	{
    if(n%i==0)
	{
	sum+=i;
    }
	}
	if(sum==ori){
		printf("Number is Perfect");
	}else{
		printf("Number is Not Perfect");
	}
}