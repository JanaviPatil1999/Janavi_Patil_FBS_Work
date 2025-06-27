#include<stdio.h>

int main(){
	int num,sum=0;
	float avg;
	
	printf("Enter the five numbers: \n");
	for(int i=0;i<5;i++){
		scanf("%d",&num);
		sum+=num;
		
	}
	avg=sum/5;
	printf("Average = &f",avg);
}