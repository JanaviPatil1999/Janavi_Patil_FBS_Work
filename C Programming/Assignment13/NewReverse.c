#include<stdio.h>
void displayarray(int*arr,int n);
int* reverse(int*ptr,int n);
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	displayarray(arr,10);
	int* rev=reverse(arr,10);
	
	printf("\ndisplaying reverse in main:");
	displayarray(rev,10);
}

int* reverse(int*ptr,int n)
{
//	int temp[n];
	int*temp=(int*)malloc(sizeof(int)*n);
	
	for(int i=n-1,j=0;i>=0;i--,j++){
		temp[i]=ptr[j];
	}
	printf("\nreverse display in function: ");
	displayarray(temp,n);
	
	return temp;
}

void displayarray(int*arr,int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
