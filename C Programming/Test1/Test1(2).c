//check weather the year is leap or not
#include<stdio.h>
float CheckLeap();
int main(){
	
	CheckLeap();
	
}

float CheckLeap(){
	int yr;
	printf("Enter the Leap Year: ");
    scanf("%d",&yr);
    if(yr%4==0 || yr%100!=0 || yr%400==0)
	{
		printf("year is leap yr");
	}else{
		printf("year is not yr");
	}
    	
} 
