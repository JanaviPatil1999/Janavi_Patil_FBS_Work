#include<stdio.h>

int main(){
	int start,end,sum,fact,num,digit=0;
	printf("Enter the number:");
	scanf("%d%d",&start,&end);
	
	for(int i=start;i<=end;i++){
		num=i;
		sum=0;
	
		while(num>0)
		{
			digit=num%10;
			fact=1;
			
			for(int j=1;j<=digit;j++){
				fact*=j;
			}
			sum+=fact;
			num=num/10;
		}
		
	
		if(sum==i)
		{
			printf("%d\n",i);
		}
		
		
		
		
		
	}

}