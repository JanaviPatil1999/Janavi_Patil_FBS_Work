#include<stdio.h>
int main()
{
	int sum=0,n=5;
	int arr[5]= {1,2, 3, 4,5};
    int brr[5]={10,20,30, 40, 50};
    int crr[5];
    printf("Array of c: ");
	
			for(int p=0;p<n;p++)
			{
				crr[p]=arr[p]+brr[p];
				printf("%d ",crr[p]);		
			}
}
