#include<stdio.h>
//Write a program to check whether a given year is a leap year.
char CheckEvenAndOdd(yr);
int main(){

int yr;
printf("Enter the year: ");
scanf("%d",&yr);
char ch=CheckEvenAndOdd(yr);
if(ch=='e'){
	printf("Leap Year It Is");
}else if(ch=='o'){
	printf("Not an Leap Year");
}
}

char CheckEvenAndOdd(yr){
	char c;
	if(yr%4==0 && yr % 100!=0 || yr%400==0){
		c='e';
	}else{
		c='o';
	}
	return c;
}