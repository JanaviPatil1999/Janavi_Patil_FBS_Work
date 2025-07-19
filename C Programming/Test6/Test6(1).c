#include<stdio.h>
//Write a program to find the common element in two array

int main()
{
	int arr[10],arra[10],n1,n2,k=0,arrx[20];
	int elementpresent=0;

	
	
	printf("Enter size of array arr: ");
	scanf("%d",&n1);
	printf("\nEnter the elements: ");
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter size of array arra: ");
	scanf("%d",&n2);
	printf("\nEnter the elements: ");
	for(int i=0;i<n2;i++)
	{
		scanf("%d",&arra[i]);
	}
	
	printf("Common Element: ");
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(arr[i]==arra[j])
			{
			
			elementpresent==0;
		    
			for(int h=0;h<k;h++)
			{
				if(arr[i]==arrx[h]){
					elementpresent=1;
					break;
				}
				
		    }
	    	
			if(elementpresent==0)
			{
				printf("%d , ",arr[i]);
				arrx[k++]=arr[i];
			}
			break;
		    }
		}
	}

	

}