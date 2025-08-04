#include<stdio.h>
//time(date,min,sec)
typedef struct time{
	int hour;
	float min;
	float sec;
}time;
int main(){
	time taking[3];
	for(int i=0;i<3;i++){
	printf("Taking an input: %d\n",i+1);
	
	printf("Enter the hours: ");
	scanf("%d",&taking[i].hour);
	printf("\nEnter the min: ");
	scanf("%f",&taking[i].min);
	printf("\nEnter the sec: ");
	scanf("%f",&taking[i].sec);	
	}

printf("Printing out an time: ");
for(int i=0;i<3;i++){
	
	printf("%d : %.2f :%.2f\n",taking[i].hour,taking[i].min,taking[i].sec);
}
}