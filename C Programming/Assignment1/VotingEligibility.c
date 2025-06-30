#include<stdio.h>

void main(){
	int num;
	
	printf("Enter your age: ");
	scanf("%d",&num); 
	if( num>=18){
		printf("You are eligible");
		
	}else{
		printf("You are not eligible");
	}
}