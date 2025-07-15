#include<stdio.h>
// 7 Write a C program to convert given minutes into hours and remaining minutes.
void Mintohours();
int main(){
	Mintohours();
}
void Mintohours(){
	int min,h,remainmin;
	printf("Enter in minutes: ");
	scanf("%d",&min);
	h=min/60;
	printf("Hours: %d\n",h);
	remainmin=min%60;
	printf("Remaining Minutes: %d",remainmin);
}