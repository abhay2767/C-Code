#include<stdio.h>
//sum is a function which take a and b as input and return an integer as an input
int sum();//function prototype declaration
int main()
{
	int c;
	printf("Addition of two number come from function definition:-\n");
	c = sum();//function call
//or 	c = sum(2,5); //input in maine function
	printf("The value of c is:- %d",c);
	
	
	
	return 0;
}

int sum(int a, int b)//function definition
{
	printf("Enter value of a and b:-\n");//input in function definiton and call in maine fuction.
	scanf("%d%d",&a,&b);
	int result;
	result = a+b;
	return result;
}
