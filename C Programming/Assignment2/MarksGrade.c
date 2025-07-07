#include<stdio.h>
int main(){
int marks;
printf("Enter your marks:");
scanf("%d",&marks);
if(marks>75){
	printf("DISTINCTION");
}
else if(marks>65){
	printf("First Class");
}
else if(marks>55){
	printf("Second Class");
}
else if(marks>=40){
	printf("Pass");
}
else{
	printf("Fail");
}
}