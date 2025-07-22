#include<stdio.h>
int main(){
	int arra[5],n,arrb[5],arrc[10];

	printf("Enter the elements for arra: ");
	for(int i=0;i<5;i++){
		scanf("%d",&arra[i]);
	}
	printf("Enter the elements for arrb: ");
	for(int i=0;i<5;i++){
		scanf("%d, ",&arrb[i]);
	}
    //inserting an elements to the array 
	 for(int i=0;i<=10;i++){
	 	arrc[i]=arra[i];	
	 }
	 for(int i=0;i<=10;i++){
	 	arrc[5+i]=arrb[i];
	 }
	 
	 //Displaying the array of c
	
	 for(int i=0;i<=10;i++){
	 	printf("%d, ",arrc[i]);
	 }	
}