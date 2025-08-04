#include<stdio.h>
//ass13 student(rollno,name,marks)
struct student{
	int rollno;
	char name[100];
	int marks;
};
int main(){
	struct student s1,s2;
    printf("Enter the name ,roll no and marks for s1:\n");
	scanf("%s",&s1.name);
	scanf("%d",&s1.rollno);
	scanf("%d",&s1.marks);
	printf("Roll no: %d , Name: %s ,Marks: %d\n",s1.rollno,s1.name,s1.marks);
    
	printf("Enter the name ,roll no and marks for s2\n:");
	scanf("%s",&s2.name);
	scanf("%d",&s2.rollno);
	scanf("%d",&s2.marks);
	printf("Roll no: %d , Name: %s ,Marks: %d",s2.rollno,s2.name,s2.marks);
	
}
