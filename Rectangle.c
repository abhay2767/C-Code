#include<stdio.h>
int main()
{
	float lenght, width, parimeter;
	printf("Enter the lenght:");
	scanf("%f",&lenght);
	printf("Enter the width: ");
	scanf("%f",&width);
	parimeter =  2*(lenght + width);
	printf("parimeter of Rectangle = %f\n", parimeter);
	return 0;
}