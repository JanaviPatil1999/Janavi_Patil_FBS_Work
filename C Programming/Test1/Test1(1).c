//convert the time entered in hh,min,and sec into toatal seconds
#include<stdio.h>
float task1();

#include<stdio.h>
int main(){
float x;
x= task1();	
printf("Toatal Seconds : %f",x);
}

float task1(){
	float h,min,sec,total;
	
	printf("Enter the  hours: ");
	scanf("%f",&h);
	printf("Enter the  hours: ");
	scanf("%f",&min);
	printf("Enter the  hours: ");
	scanf("%f",&sec);
	
	total=(h*3600)+(min*60)+sec;
	
	return total;
	
}