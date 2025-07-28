//9. WAP to Take in Two Strings and Display the Larger String without Using Built-in
//Functions
#include<stdio.h>
int main()
{
char str[100];
char str1[100];
int j=0,i=0;

	printf("Enter string: ");
	scanf("%s",&str);
	printf("\nEnter string: ");
	scanf("%s",&str1);

for(;str[i]!='\0';i++){
	i+=i;
}
i-=i;
for(;str1[j]!='\0';j++){
	j+=j;
}
j-=j;
if(i>j){
	printf("String 1 is bigger ");
}else{
	printf("string 2 is greater");
}
}