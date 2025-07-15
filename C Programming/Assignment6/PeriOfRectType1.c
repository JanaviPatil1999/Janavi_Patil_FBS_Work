#include<stdio.h>
//type 1  perimeter of rectangle
void PeriOfRect();
int main(){
	PeriOfRect();
}
void PeriOfRect(){
int len,bre,perimeter;
printf("Enter the length & Bredth: ");
scanf("%d%d",&len,&bre);
perimeter= 2*(len+bre);

printf("The perimeter of Reactagle: %d",perimeter);

}