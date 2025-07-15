#include<stdio.h>
void swap(int*,int*);
int main(){
	int a=10,b=30;
	swap(&a,&b);
	
}
void swap(int*a,int*b){
	printf("before Swapping a=%d  b=%d\n",*a,*b);
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("After swapping a=%d , b=%d",*a,*b);
	
}