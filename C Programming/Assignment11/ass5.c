//5. WAP to Count the Number of Vowels in a String
#include<stdio.h>
int main(){
	char str[100];
	printf("Enter the string: ");
	scanf("%s",&str);
	int len=strlrn(str);
    int count=0;
	
	for(int i=0;str[i]!='\0';i++){
	
	if(str[i]=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
	count++;
	}
	printf("Number of vowels: %d",count);
}