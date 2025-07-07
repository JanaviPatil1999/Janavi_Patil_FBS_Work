#include<stdio.h>

int main(){
 	
float price,discount;
char student;

printf("Enter Your Price: ");
scanf("%f",&price);

printf("Are you student: 'y or n': ");
scanf(" %c",&student);

if(student=='y'){
	if(price>500
	){
		discount=price*0.20;
	}else{
		discount=price*0.10;
	}
}
else{
	if(price>600){
		discount=price*0.15;
	}else{
		discount=0;
	}
}

printf("Discount provided is: %f\n",discount);
printf("Total Price is: %f",price-discount);
	
}