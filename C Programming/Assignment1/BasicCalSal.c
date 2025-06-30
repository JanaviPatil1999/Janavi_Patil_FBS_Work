#include<stdio.h>

void main(){
	float basic,da ,ta,hra,Total;
	
	printf("Enter The Basic: ");
	scanf("%f",&basic);
	
	if(basic<=5000){
	da=0.10*basic;	
	ta=0.20*basic;
	hra=0.25*basic;
	}
	else{
		da=0.15*basic;
		ta=0.25*basic;
		hra=0.30*basic;
	}
	
	Total=da+ta+hra;
	
	printf("The total salary is: %f",Total);
	
}