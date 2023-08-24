#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Number form 1 to 5:- ");
	scanf("%d",&a);
	// ternary operator
	(a < 5) ? printf("Number is less than 5.") : Printf("Number is greater than 5");
	return 0;
}
