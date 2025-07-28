//addiion of last two digits number
#include<stdio.h>
void lastdigit();
int main(){
	lastdigit();
	
}

void lastdigit(){
	int n,lastdigit;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	lastdigit= n%100;
	printf("the last digit is : %d",lastdigit);
    
}