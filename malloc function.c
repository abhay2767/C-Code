#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	
	//////////////****Sizeof operator in C**********//////////////
/*	printf("The size of int on my PC is %d\n",sizeof(int));
	printf("The size of float on my PC is %d\n",sizeof(float));
	printf("The size of char on my PC is %d\n",sizeof(char));
	printf("The size of double on my PC is %d\n",sizeof(double));
*/
	ptr = (int *)malloc(6 * sizeof(int));//6 = space for 6 ints.//(int *) = typecast in int.// here 6 int memory in allocated dynamically.
//	ptr = (float *)malloc(10 * sizeof(float));// here 10 float are allocated dynamically now we can use this anytime or (run time)
	int i;
	for(i =0;i<5;i++)
	{
		printf("Enter the value for %d Element:- ",i+1);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("The value of %d element is: %d\n",i+1,ptr[i]);
	}
	//NOTE- This memory of array is Dynamic Allocated.
	return 0;
}
