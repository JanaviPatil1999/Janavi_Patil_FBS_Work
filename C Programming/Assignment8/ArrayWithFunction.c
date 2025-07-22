#include<stdio.h>
StoreArray(int* ptr,int size);
Displayarray(int*ptr,int size);
Replacearray(int*ptr,int size,int old,int newno);
int main(){
	//crud operations using function and menu
	int arr[10];
	StoreArray(arr,10);
	Displayarray(arr,10);
	Replacearray(arr,10,5,7);
	Displayarray(arr,10);
	
}
StoreArray(int* ptr,int size){
	printf("\nEnter Array: ");
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
}

Displayarray(int*ptr,int size){
	printf("\nArray is : { ");
for(int i=0;i<size;i++)	{
	printf("%d",ptr[i]);
}
printf("}");
}

Replacearray(int*ptr,int size,int old,int newno){
	for(int i=0;i<size;i++){
		if(ptr[i]==old){
			ptr[i]=newno;
		}
	}
}

