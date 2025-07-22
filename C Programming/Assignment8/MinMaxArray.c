#include<stdio.h>
int main(){
	int array[90],n,max,min;
	
	printf("Enter the Number of Element you want to add: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		max=array[0];
		min=array[0];
		printf("Displaying an array element: %d\n",array[i]);
		
		if(array[i]>max){
			max=array[i];
		}
    }
    
    printf("The maximum number : %d",max);
    
    for(int i=0;i<n;i++)
	{
	
    	if(array[i]<min){
			min=array[i];
		}
    }
	printf("\nThe minimum number : %d",min);   
}