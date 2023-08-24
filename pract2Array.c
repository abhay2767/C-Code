//write a program to create an array of 10 integers and store multiplecation table of 5.
#include<stdio.h>
int main()
{
	int mul[10],i;
	for(i =0;i<10;i++)
	{
		mul[i] = 5*(i+1);
		{
			printf("5X%d = %d\n",i+1,mul[i]);
		}
	}
	return 0;
}
