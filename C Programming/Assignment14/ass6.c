#include<stdio.h>
//date(date,month,year)
typedef struct Date{
	int date;
	int month;
	int year;
}Date;
int main(){
	Date given[3];
	for(int i=0;i<3;i++){
		printf("The date: %d\n",i+1);
		printf("Enter the date :");
		scanf("%d",&given[i].date);
		printf("\nEnter the month : ");
		scanf("%d",&given[i].month);
		printf("\nEnter the year : ");
		scanf("%d",&given[i].year);
	}
	
	printf("Printing out an dates: \n");
	for(int i=0;i<3;i++){
		printf("%d/%d/%d\n",given[i].date,given[i].month,given[i].year);
	}
}