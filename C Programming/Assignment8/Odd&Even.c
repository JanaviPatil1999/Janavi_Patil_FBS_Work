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
	    
	    	printf("Even: ");
	    	for(int i=0;i<n;i++){
	    		if(arr[i]%2==0){
	    			printf("%d",arr[i]);
				}
			}
			printf("\nOdd: ");
			for(int i=0;i<n;i++){
	    		if(arr[i]%2!=0){
	    			printf("%d",arr[i]);
				}
			}
			
				
}