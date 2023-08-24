#include<stdio.h>
void goodmoring();  //Function prototype
void goodevening(); //Function prototype
void goodnight();   //Function prototype
int main()
{
	int a = 5;
	goodmoring();   //Function Call
	float b = 10.5;
	printf("\nValue of A is: %d",a);
	goodevening();  //Function Call
	printf("\nValue of B is: %d",b);
	goodnight();    //Function Call
	return 0;
}
void goodmoring() //Function Defination
{
	printf("\nHello! Abhay, Good Moring.\n");
}
void goodevening()  //Function Defination
{
	printf("\nHello! Abhay, Good Evening.\n");
}
void goodnight()  //Function Defination
{
	printf("\nHello! Abhay, Good Night.\n");
}
