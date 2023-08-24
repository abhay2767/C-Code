#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int *ptr2, i,n;
	ptr = (int *)malloc(600 * sizeof(int));
//	printf("How many integer, You want to enter:- ");
//	scanf("%d",&n);
	for(i =0;i<600;i++)
	{
		ptr2 = (int *)malloc(600000 * sizeof(int));
		printf("Enter the value for %d Element:- ",i+1);
		scanf("%d",&ptr[i]);
		free(ptr2);//free function is use to free the memory
	}
	for(i=0;i<5;i++)
	{
		printf("The value of %d element is: %d\n",i+1,ptr[i]);
	}
	return 0;
}
