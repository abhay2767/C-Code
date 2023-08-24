#include<stdio.h>
int main()
{
//	int a =5, b= 6,c= 4,d=2;
//	printf("Hello\n %d", a+b*c/d); here 
    int a =5, b = 10, c= 2;
    printf("Calculate a*b/c as (a*b)/c \n%d", a*b/c); // a*b first calclate the /c
    printf("\nCalculate a/b*c as (a/b)*c \n%d", a/b*c); //a/b fir calculate the *c
    // here * and / both are equal but working as Left to right mean first the Left side value so here value is in left is a*b and a/b than after this /c and *c

	return 0;
}