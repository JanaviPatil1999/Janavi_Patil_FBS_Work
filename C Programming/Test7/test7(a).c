//qu1 write the program to accept array and exchange the data of xth position to yth position
#include<Stdio.h>
int main(){
	int x,y;
	int arr[7]={11,23,30,4,21,45,50};
	printf("Enter X position: ");
	scanf("%d",&x);
	printf("\nEnter the Y position:");
	scanf("%d",&y);
	
	for(int i=0;i<7;i++){
		int temp=arr[x];
		arr[x]=arr[y];
		arr[y]=temp;
	}
	printf("displaying an array: ");
	for(int i=0;i<7;i++){
		printf("%d ",arr[i]);
	}
	
}