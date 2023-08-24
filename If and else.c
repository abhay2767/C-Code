#include<stdio.h>
int main()
{
	int age;
	printf("Enter Age: ");
	scanf("%d",&age);

 if (age == 50) // Relational operator == , <= >= < > != etc
   {
    	printf("Happy 50th Birthday:");
   }
else
   {
    	printf("Sorry you are no 50");
   }
   return 0;
}
/*
	if(age>=18)	if(age!=18)
	{
		printf("You can Drive.");
	}
	else
	{
		printf("You can not Drive. & Apply for License");
	}
*/