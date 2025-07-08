#include<stdio.h>

int main(){
	int row ,column;
	printf("Enter the number: ");
	scanf("%d",&row);
	printf("Enter the number: ");
	scanf("%d",&column);
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(i==0||i==row-1||j==0||j==column-1){
					printf("*");
			}else{
				printf(" ");
			}
		
		}
		printf("\n");
	}
}