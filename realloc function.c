#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr = (int *)malloc(6 * sizeof(int));
	int i;
	for(i =0;i<6;i++)
	{
		printf("Enter the value for %d Element:- ",i+1);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("The value of %d element is: %d\n",i+1,ptr[i]);
	}
	//Reallocate ptr using realloc()function.
	ptr = realloc(ptr,10*sizeof(int));//here we use that memeory taken above here we reuse the memory or recycle the memeory.
	
	for(i =0;i<10;i++)
	{
		printf("Enter the value for %d Element:- ",i+1);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("The value of %d element is: %d\n",i+1,ptr[i]);
	}
	return 0;
}
