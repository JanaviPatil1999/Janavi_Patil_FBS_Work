#include<stdio.h>
//print even odd numbers in given range
void FuncEvenOdd(int start ,int end);
int main(){
	int start,end;
	printf("Enter the range from start to end: ");
	scanf("%d %d",&start,&end);
	FuncEvenOdd(start ,end);
	
}
void FuncEvenOdd(int start ,int end){
	printf("ODD: ");
	for(int i=start;i<end;i++){
		if (i%2!=0){
			printf("%d,  ",i);
		}
	}
	
	
		printf("\nEven: ");
	for(int i=start;i<end;i++){
		if (i%2==0){
			printf("%d,  ",i);
		}
	}
}