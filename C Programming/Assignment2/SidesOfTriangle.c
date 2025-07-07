#include<stdio.h>
int main(){

int s1,s2,s3;
printf("Enter three sides: ");
scanf("%d%d%d",&s1,&s2,&s3);

if(s1==s2 && s2==s3 &&s3==s1){
	printf("Traingle is Equilateral");
}
else if(s1==s2 || s2==s3 || s3==s1){
	printf("Triangle is Isosceles ");
}else{
	printf("Traingle is Scalene");
}
}