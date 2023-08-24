#include<stdio.h>
int main()
{
	int mul[10];
	int i,n;
	printf("Enter the number:- ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		mul[i] = n*(i+1);
		{
			printf("%dX%d =%d %d\n",n,i+1,mul[i]);
		}
	}
	return 0;
}
