//write a program contaning a dunction which reverse the array passed to it.
#include<stdio.h>
void reverse(int *arr,int n);
int main()
{
	int arr[] = {1,2,3,4,5};
	int i;
	reverse(arr,5);
	for(i = 0; i<5; i++)
	{
		printf("The value of %d element is:- %d \n",i+1,arr[i]);
	}
	return 0;
}
void reverse(int *arr,int n)
{
	int temp,i;
	for(i=0; i<(n/2);i++)
	{
		temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
}
