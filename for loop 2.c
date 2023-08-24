#include<stdio.h>
int main()
{
	int i=0,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=n; i; i--)
	{
		printf("The value of i is: %d",i);
	}
	return 0;
}
