//Admin (id, name, salary, allowance)
#include<stdio.h>
struct admin{
  int id;
  char name[100];
  int salary;
  int allowances;
	
};
int main(){
	struct admin a;
	
	printf("Enter the name ,id ,salary and allowances for Admin1:\n");
	scanf("%s",&a.name);
	scanf("%d",&a.id);
	scanf("%d",&a.salary);
	scanf("%d",&a.allowances);
	printf("name:%s ,id: %d ,salary: %d and allowances: %d\n",a.name,a.id,a.salary,a.allowances);

}
