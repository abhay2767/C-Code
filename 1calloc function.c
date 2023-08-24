#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n;
	printf("How many integer, You want to enter:- ");
	scanf("%d",&n);
	ptr = (int *)calloc(n, sizeof(int));//it is same as malloc but a plus point is that it initializa it with default value if 0.
	int i;
	for(i=0;i<n;i++)
	{
		printf("The value of %d element is: %d\n",i+1,ptr[i]);
	}
	return 0;
}
