#include<stdio.h>
void printArray(int*ptr, int n);
int main()
{
	int arr[] = {1,2,5,65,48,4,9};
	printArray(arr,7);
	printf("%d",arr[2]);
	return 0;
}
/*
void printArray(int *ptr, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("The value of element %d is %d\n",i+1,*(ptr+i));//(*(ptr+i)) dereference.
	}
}
*/
//Above and below function were doing same.
void printArray(int ptr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("The value of element %d is %d\n",i+1,ptr[i]);//(*(ptr+i)) dereference.
	}
	ptr[2] = 555;//
}


