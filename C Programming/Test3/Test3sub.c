#include<stdio.h>
//write a program to add alternate numbers from given range
int AlternateNo(int start,int end);
int main(){
	int start,end,val;
	printf("Enter the range from sart to end: ");
	scanf("%d %d",&start,&end);
    val=AlternateNo(start,end);
    printf("Sum of alternative: %d",val);
	
}
int AlternateNo(int start,int end){
	int sum;
	for(int i=start;i<=end;i=i+2){
		sum+=i;
	}
	return sum;
}