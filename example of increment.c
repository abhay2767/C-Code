#include<stdio.h>
int main()
{
	int a=5;
	printf("%d %d %d",a, ++a, a++); //Output-7 7 5
	//compiler take it from right to left mean a++, ++a, a
	//now after compiler take value and than  printf function print value as you give it you
	//print a,++a,a++ 
	//compiler side- a++ = 5, ++a = 7, a = 7
	// printf print as you give= a=7,++a=7,a++ = 5
	//so output is 7 7 5.
	
	return 0;
}
