#include<stdio.h>
int main()
{
	float celsius, fahrenheit;
	printf("Enter the temprature in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius = ( fahrenheit - 32) * 5 / 9;
	printf("%.2f Fahrenheit = %.2f celsius",fahrenheit, celsius);
	return 0;
}