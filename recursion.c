#include<stdio.h>
int factorial(int x);

int main()
{
	int a = 5;
	printf("The Value of factorial %d is %d",a,factorial(a));
	
	
	return 0;
}

int factorial(int x){
	printf("Calling factorial: %d\n",x);
	if(x==0 || x==1)
	{
		return  1;
	}
	else
	{
		return x*factorial(x-1);
		//return f;
	}
}
