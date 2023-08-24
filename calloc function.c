#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr = (int *)calloc(6, sizeof(int));//it is same as malloc but a plus point is that it initializa it with default value if 0.
	int i;
/*	for(i =0;i<6;i++)
	{
		printf("Enter the value for %d Element:- ",i+1);
		scanf("%d",&ptr[i]);
	}*/
	for(i=0;i<6;i++)
	{
		printf("The value of %d element is: %d\n",i+1,ptr[i]);
	}
	return 0;
}
