#include<stdio.h>
int main(){
	int arr[60],n;
	printf("Enter the Size: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
		for(int i=0;i<n;i++)
		{
		 scanf("%d",&arr[i]);
	    }
	printf("Displaying the elements Alternately: ");
	for(int i=0;i<n;i+=2){
		printf("%d",arr[i]);
	}
	
	}