#include<stdio.h>
//Bank withdrawal and deposit
void bank(int b);
void depo(int* b);
void with(int* b);
int main(){
	int Balance=3000,ch,no=1;
while(1){
	printf("1.Deposit\n2.Withdraw\n3.Bank Balance");
	
	printf("\nEnter your choice: ");
	scanf("%d",&ch);

		if(ch==1){
	   depo(&Balance);
	}else if(ch==2){
		with(&Balance);
	}else if(ch==3){
		bank(Balance);
	}
	printf("\nEnter 1 for continue and 0 for exist: ");
	scanf("%d",&no);
	
	if(no==0)
	break;
	
	}
return 0;
}
void bank(int b){
	printf("\nBank Balance present: %d",b);
}
void depo(int* b){
	int depoo;
	printf("\nEnter the amount you want to enter:  ");
	scanf("%d",&depoo);
	if(depoo==0){
		printf("\nPlease enter amount grater than 0");
	}else {
		*b=*b+depoo;
		printf("\nYour total balance now : %u    .....Amount is being deposited",*b);
	}
	
}
void with(int *b){
	int with;
	printf("\nPlease enter the amount you want to withdraw: ");
	scanf("%d",&with);
	if(*b=*b-with >=3000){
		*b=*b-with;	
		printf("\nYour total balance: %d",*b);	
	}else{
		printf("your Bank Balance not sufficient");
	}
	
}