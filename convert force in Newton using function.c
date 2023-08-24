#include<stdio.h>
float Force(float mass);
int main()
{
	float m;
	printf("Enter Value of mass in Kgs: ");
	scanf("%f",&m);
	
	printf("The value of force in Newton is: %.2f",Force(m));
	
	return 0;
}
float Force(float mass)
{
	float result;
	result = mass*9.8;
	return result;
}
