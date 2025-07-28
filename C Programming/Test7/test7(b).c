#include<stdio.h>
void palindrome(int arr[],int n);
int main(){
int n,arr[100];
printf("Enter the array size: ");
scanf("%d",&n);
printf("Enter an array element: ");
for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}

palindrome(arr,n);

}
void palindrome(int arr[],int n){
int flag=0;
for(int i=0;i<n/2;i++){
	if(arr[i]!=arr[n-1-i]){
		flag=1;
		break;
	}	
	
   }
   if(flag==0){
		printf("the array is palindrome");
	}
	else{
		printf("Array is not palindrome");
	}
}