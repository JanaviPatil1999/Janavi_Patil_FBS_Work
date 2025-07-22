#include<stdio.h>
int main(){
	int n,arr[50];
	printf("Total Number of Array: ");
	scanf("%d",&n);
	
	printf("Enter the Elements in an array: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Sorting an array: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
			int temp;
			temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d ,",arr[i]);
	}
}