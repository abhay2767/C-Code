#include<stdio.h>
void display();    //Function prototyep
int main()
{
	int a;
	printf("This is Initialize function\n");
	display();   //Function Call
	printf("Display function finished its work\n");
	
	return 0;
}
void display() //Function Defination
{
	printf("Hello this is come from Fuction defination\n");
}
