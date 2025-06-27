#include<stdio.h>
int main(){

int marks,sum=0;
float per;
printf("Enter the total 5 marks: ");
for(int i=0;i<5;i++){
	scanf("%d",&marks);
	sum+=marks;
	
}
printf("The sum of marks is: %d\n",sum);
per=(sum/500.0)*100;
printf("The Percentage is: %f%%",per);
}

