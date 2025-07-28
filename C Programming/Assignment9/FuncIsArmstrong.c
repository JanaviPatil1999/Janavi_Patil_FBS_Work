#include<stdio.h>
void IsArmstrong(int start,int end);
int main(){
int start,end;

printf("Enter the number : ");
scanf("%d",&start);
printf("Enter the number : ");
scanf("%d",&end);
IsArmstrong(start,end);
		
}
void IsArmstrong(int start,int end){
	int rem,sum,temp;
	
	for(int i=start;i<=end;i++)
 {
	temp=i;
	sum=0;
	while(temp>0){
		rem=temp%10;
		sum+=rem*rem*rem;
		temp=temp/10;
	}
	if(i==sum)
	{
		printf("%d\n",i);
	
    }
	
 }
}