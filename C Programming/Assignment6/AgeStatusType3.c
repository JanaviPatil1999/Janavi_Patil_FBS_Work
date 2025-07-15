#include<stdio.h>
//7. Accept the age and check if the person is: Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
char PersonState();
int main(){
	char character=PersonState();
	if(character=='C'){
		printf("Child");
	}else if(character=='A'){
		printf("Adult");
	}else if(character=='T'){
		printf("Teenager");
	}else if(character=='S'){
		printf("Senior");
	} else{
		printf("Invalid Character");
	}
	
	printf(" %c",character);
}
char PersonState(){
	int age;
	char c;
	printf("Enter the age: ");
	scanf("%d",&age);
	if(age<12){
		c='C';
	}else if(age<=19){
		c='T';
	}else if(age<=59){
		c='A';
	}else if(age<=60){
		c='S';
	} 
	return c;	
}
