#include<stdio.h>
int main()
{
	int age;
	printf("Enter the Age: ");
	scanf("%d",&age);
	if(age >= 18)
	{
		printf("You can Drive car.");
	}else
	{
		printf("You are Minor so you can not drive car.");
	}
	return 0;
}
