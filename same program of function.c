#include<stdio.h>
void goodmoring();  //Function prototype
void goodevening(); //Function prototype
void goodnight();   //Function prototype
int main()
{
	
	//here we can call function [goodmoring()] and and there are also a function is [goodevening()] so here both will print.
	int a;
	goodmoring();
	return 0;
}
void goodmoring() //Function Defination
{
	printf("\nHello! Abhay, Good Moring.\n");
	goodevening();
}
void goodevening()  //Function Defination
{
	printf("\nHello! Abhay, Good Evening.\n");
}
void goodnight()  //Function Defination
{
	printf("\nHello! Abhay, Good Night.\n");
}
