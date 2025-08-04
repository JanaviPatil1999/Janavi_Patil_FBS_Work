#include<stdio.h>
int main(){
    int feet,inch;
    
    printf("Enter the feet: ");
    scanf("%d",&feet);
    printf("Enter the inch: ");
    scanf("%d",&inch);
    
    int result=distance(feet,inch);
    printf("result in inch: %d",result);
    
}
int distance(feet,inch){
	int result=feet*12;
	return result;
}
