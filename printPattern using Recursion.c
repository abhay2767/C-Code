#include<stdio.h>
void printPattern(int n);
int main()
{
	int n;
	printf("Enter value to print pattern:");
	scanf("%d",&n);
	printPattern(n);
	return 0;	
}
// for n = 3
//*
//***
//*****
//1 - 1
//2 - 3
//3 - 5



void printPattern(int n)

{
	if(n == 1)
	{
		printf("*");
		printf("\n");
		return;
	}
	printPattern(n-1);
	int i;
	{
		for( i=0; i<(2*n-1);i++)
	{
		printf("*");
	}
	printf("\n");
	}
	
}
