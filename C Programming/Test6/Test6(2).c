#include<stdio.h>
//find the maximum of two number
int main(){
	int arr[10],n,max,max1=0;
	
	printf("Enter size of array arr: ");
	scanf("%d",&n);
	printf("\nEnter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max1=max;
			max=arr[i];	
		}else if(arr[i]>max1 && arr[i]!=max){
			max1=arr[i];
		}else
		break;
	}
	printf("The maximum number is %d and second max number is: %d",max,max1);
	
	
}