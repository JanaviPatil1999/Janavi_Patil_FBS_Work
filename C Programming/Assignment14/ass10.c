#include<stdio.h>
void store(given);
void display(given);
typedef struct product{
	int id;
	char name[100];
	char quality[100];
	float price;
}product;
int main(){
	
    product given[2];
    store(given);
    display(given);
    
	
}
void store(product given[])
{
	for(int i=0;i<2;i++){
    	printf("Enter the  id: \n");
    	scanf("%d",&given[i].id);
    	printf("Enter the  name: \n");
    	scanf("%s",&given[i].name);	
    	printf("Enter the  quality: \n");
    	scanf("%s",&given[i].quality);
    	printf("Enter the price: \n");
    	scanf("%f",&given[i].price);
	}
}
void display(product given[]){
	printf("Printing an whole structure: \n");
	
	for(int i=0;i<2;i++){
		printf("id: %d",given[i].id);
		printf("ID: %d  Name: %s  Quality: %s  price: %.2f\n",given[i].id,given[i].name,given[i].quality,given[i].price);
		
	}
	
}