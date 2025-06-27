#include<stdio.h>

int main(){
	int num,square,cube;
	printf("Enter a number: ");
	scanf("%d",&num);
	square=num*num;
	cube=num * num * num;
	printf("Square: %d & cube: %d",square,cube);
}