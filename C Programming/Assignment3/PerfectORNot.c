#include<stdio.h>
int main(){

int temp,num,sum=0;

printf("Enter the number: ");
scanf("%d",&num);
temp=num;

for(int i=1;i<num;i++){
	if(num%i==0){
		sum+=i;
	}
}

if(temp==sum){
	printf("Number is perfect");
	
}else{
	printf("Nmuber is not perfect");
}
}