//write a program to print the address of a variable.
//use this address to get the value of this variable.

#include<stdio.h>
int main()
{
	int i = 5;
	printf("Address of i %u\n",&i);
	int*j = &i;
	printf("value of i using pointer %d\n",*j);
	printf("Address of i using pointer %d\n",j);
	printf("Address of i using pointer %u\n",&j);
	return 0;
}
