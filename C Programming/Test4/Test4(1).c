#include<stdio.h>
int main(){
	//Write a program to print factors of numbers in given range
	//range 10 to 15
	//10 =1,2,5,10
	int start,end;
	
	printf("Enter the range from Start to End ");
	scanf("%d%d",&start,&end);
	
	for(int i=start;i<=end;i++){
		printf("%d=\n",i);
		for(int j=1;j<=i;j++){
			if(i%j==0){
				printf("%d,",j);
			}
		}
		printf("\n");
	}
}