#include<stdio.h>
int main(){
	int arr[10],n;
	printf("Enter the Total Size: ");
	scanf("%d",&n);
	
	printf("Enter the Elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Reverse of array: {");
	for(int i=n-1;i>=0;i--){
		printf("%d,",arr[i]);
	}	
	printf("}");
}