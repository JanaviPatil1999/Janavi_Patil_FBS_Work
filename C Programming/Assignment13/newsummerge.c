#include<stdio.h>
int* sumarray(int *arr,int *brr,int n);
int main()
{
	int n=5;
	int arr[]= {1,2,3,4,5};
    int brr[]={10,20,30, 40,50};
    int* temp=sumarray(arr,brr,n);
    printf("Array of c: ");
    
    for(int i=0;i<5;i++){
    	printf("%d ",temp[i]);
	}
    
    
	
}
int* sumarray(int *arr,int *brr,int n){
	
	int* crr=(int*)malloc(sizeof(int)* 5);
	
			for(int p=0;p<n;p++)
			{
				crr[p]=arr[p]+brr[p];	
			}
			return crr;
}
