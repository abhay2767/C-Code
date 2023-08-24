#include<stdio.h>
int main()
{
	int age;
	int VipPerson = 10;
	printf("Enter the Age:");
	scanf("%d",&age);
	if(age <= 70 && age >= 18) //Logical AND opetator '&&'
   // if((age <= 70 && age >= 18) || !(VipPerson == 10)) //Loical OR operator '\\' and Logical Not operator '!'
	{
		printf("You are in age 18 to 70 so you can Drive:"); 
	}
	else
	{
		printf("Sorry yor are not eligble:");
	}
	return 0;
}