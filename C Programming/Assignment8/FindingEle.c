#include<stdio.h>
//2. Search the given number in array.
int main(){
	int arr[40],element,n,flag=0;
	printf("Enter No of element:");
	scanf("%d",&n);
	
	printf("Enter the Elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element you want to search: \n");
	scanf("%d",&element);
	
	for(int i=0;i<n;i++){
		if(arr[i]==element){
			flag=0;
			printf("Element %d is found in array at index of %d",element,i);
			break;
	} 
    }
}