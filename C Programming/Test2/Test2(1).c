#include<stdio.h>
//WAP to calculate elctricity bill
//1to50= 30units 51-150= 40units for 151 and above units =50units
int main(){
	float bill,result;
	printf("Enter your electricity bill: ");
	scanf("%f",&bill);
	
	
	if(bill==1 || bill>=50) {
	    int result=bill+30;	
	    printf("Result: %d",result);
	} else if(bill==51 || bill>=150){
		int result=bill+40;
		printf("Result: %d",result);
	} else if(bill==151 || bill<151){
		int result=bill+50;
		printf("Result: %d",result);
	}
	
	 
}