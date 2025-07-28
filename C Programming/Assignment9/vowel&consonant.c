#include<stdio.h>
char VowelorConsonant();
int main(){
	
	if(VowelorConsonant()=='vowel')
		printf("Character is Vowel");
	else
		printf("Character is Consonant");
	
}

char VowelorConsonant(){
	char c,vowel,consonant;
	printf("Enter the Character:  ");
	scanf("%c",&c);
	
	if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'
	 ||c=='A'|| c=='E'||c=='I'||c=='O'||c=='U'){
	 	return vowel;
	 }
	 else{
	 	return consonant;
	 }
}