#include<stdio.h>
int main()
{
	int start,end,sum,temp;
	printf("Enter the range between: ");
	scanf("%d%d",&start,&end);
	
	for(int i=start;i<=end;i++)
	{
		temp=i;
		sum=0;
	for(int j=1;j<i;j++)
	{
		if(i%j==0)
		{
			sum+=j;
		}	
	}
	if(sum==temp){
			printf("%d\n",temp);
		}
	}
}