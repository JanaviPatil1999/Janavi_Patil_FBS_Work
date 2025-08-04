#include<stdio.h>
#include<string.h>
#include<time.h>
//write a program to prompt user to enter userid and password.
//after verfiying userid and password display as a 4 digit random number and ask user to enter the same.
//if user enters the same number then show him success message otherwise failed

int main(){
	char userid[10],password[10];
	char user[100],pass[100];
	int num;
	
	printf("Create an username: ");
	scanf("%s",&userid);
	
	printf("Create an password: ");
	scanf("%s",&password);
	
	printf("Enter the username:");
	scanf("%s",&user);
	printf("Enter the password: ");
	scanf("%s",&pass);
	
	if(strcmp(userid,user)==0 && strcmp(password,pass)==0){
		srand(time(0));
		int code= rand()%9000+1000;
		printf("Number to type: %d\n",code);
		printf("Enter the number : ");
		scanf("%d",&num);
		if(code==num){
			printf("Verified sucessfully");
		}else{
			printf("Failed");
		}
	}else{
		printf("Invalid username or password");
	}
	
}