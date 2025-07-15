#include<stdio.h>
//type2 with parameter without returntype
//5. Write a program to check whether a person is eligible to vote (age = 18).'
void CheckEligibility(int age);
int main(){
	int age;
	printf("Enter the Number : ");
	scanf("%d",&age);
	CheckEligibility(age);
	
}
void CheckEligibility(int age){
	if(age>=18){
		printf("Eligible To Vote");
	}else{
		printf("Not Eligible");
	}
}
