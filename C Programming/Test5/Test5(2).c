#include<stdio.h>
//finding an selling price based on the cost price and discount

int main(){
	int cp,dis;
	printf("Enter the cost price: ");
	scanf("%d",&cp);
	printf("\nEnter the discount: (in %%)");
	scanf("%d",&dis);
	
	int sale=FindSelling(cp,dis);
	printf("\nThe seling price is %d",sale);
}
int FindSelling(int cp,int dis){
	int sp;
	sp=cp-(cp*dis/100);
	return sp;
}