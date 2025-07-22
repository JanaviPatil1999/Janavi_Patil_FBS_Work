#include<stdio.h>
int main(){
	int arr[60],n,flag=1;
	printf("Enter the Size: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
		for(int i=0;i<n;i++)
		{
		 scanf("%d",&arr[i]);
	    }
	    
	    for(int i=0;i<n;i++){
	    	flag=1;
	    for(int j=2;j<arr[i];j++){
	    	
	    	if(arr[i]%j==0){
	    		flag=0;
	    		
			}
		
		}
		if(flag==1){
			printf("prime :%d\n",arr[i]);
		}
		
	}
		
}