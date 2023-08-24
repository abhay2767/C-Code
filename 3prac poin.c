//write a program to print the value of 'i' 
//variable 'k' by using Pointer to Pointer type of Variable.

#include<stdio.h>
int main()
{
	int i = 4;
	int*j = &i;
	printf("Address of I %d\n",&i);
	printf("Value of I %u\n",*j);
	int **k = &j;
	printf("Address of J %d\n",&j);
	printf("Value of i  using K %u\n",**k);
	return  0;
}
