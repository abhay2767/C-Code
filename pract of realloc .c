#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr = (int *)malloc(10 * sizeof(int));
	int i;
	for(i =0;i<10;i++)
	{
		ptr[i]=7*(i+1);
		printf("The value of 7 X %d = %d\n",i+1,ptr[i]);
	}
	//Reallocate ptr using realloc()function.
	ptr = realloc(ptr,15*sizeof(int));//here we use that memeory taken above here we reuse the memory or recycle the memeory.
	printf("\nAfter reallocation...\n");
	for(i =0;i<15;i++)
	{
		
		ptr[i]=7*(i+1);
		printf("The value of 7 X %d = %d\n",i+1,ptr[i]);
	}

	return 0;
}
