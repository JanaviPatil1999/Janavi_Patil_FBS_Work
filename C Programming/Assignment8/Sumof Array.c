#include<stdio.h>
int main(){
	int sum=0,arr[50],n;
	
	printf("Enter the Total Array: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Enter the elements: ");
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}	
	printf("Sum Of Array is : %d",sum);
}