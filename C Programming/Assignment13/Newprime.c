//Accept array and print only Even numbers of array
#include<stdio.h>
int* isEven(int* arr,int n);
int main(){
	int arr[100],n;
	printf("Enter the array size: ");
    scanf("%d",&n);
    
    printf("Enter the array: ");
    for(int i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}
	
int* temp1=isEven(arr,n);

printf("displaying the isEven in main :");
if(temp1==NULL){
	printf("when the array is null");
}else{

for(int i=0;i<n;i++){
	printf("\n%d,",temp1[i]);
}
}

}
int* isEven(int* arr,int n){
	
	//int* temp[100];
	int* temp=(int*)malloc(sizeof(int)*n);
		for(int i=0,j=0;i<n;i++){
			if(arr[i]%2==0){
				temp[j++]=arr[i];	
			}
		}
	return temp;	
}
	

