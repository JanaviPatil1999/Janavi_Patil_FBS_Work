#include<stdio.h>
GreatestOfAll(int*,int*,int*);
int main(){
	int a,b,c;
	printf("Enter the first digit: ");
	scanf("%d",&a);
	printf("Enter the Second digit: ");
	scanf("%d",&b);
	printf("Enter the Third digit: ");
	scanf("%d",&c);
	GreatestOfAll(&a,&b,&c);
}
GreatestOfAll(int* a,int* b,int* c){
	if(*a> *b && *a> *c){
		printf("%u is Greatest",*a);
	}else if(*b> *a && *b> *c){
		printf("%u is Greatest",*b);
	}else{
		printf("%u is Greatest",*b);
	}
}