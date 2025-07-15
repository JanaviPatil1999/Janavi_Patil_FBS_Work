#include<stdio.h>
//fuction type 1
	void CelsiustoFahrenheit();
int main(){
	CelsiustoFahrenheit();
}
	void CelsiustoFahrenheit(){
		float c,f;
		
		printf("Enter the Temp in Celsius:  ");
		scanf("%f",&c);
		f=(c*9/5)+32;
		printf("Temperature in Fahrenheit: %f",f);
	}
