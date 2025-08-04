//HR (id, name, salary, commission)
#include<stdio.h>
struct hr {
	int id;
	char name[100];
	int salary;
	float commission;
};
int main(){
	struct hr a;
	
	printf("Enter the name ,id ,salary and commision for HR:\n");
	scanf("%s",&a.name);
	scanf("%d",&a.id);
	scanf("%d",&a.salary);
	scanf("%f",&a.commission);
	printf("name:%s ,id: %d ,salary: %d and commission: %f\n",a.name,a.id,a.salary,a.commission);
}
