#include<stdio.h>

int main(){
	
	int n,sum;
	printf("Enter the range: 1 to ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
			}
		
		}
			if(sum==i){
			printf("%d\n",i);
	}
		}
		
}
