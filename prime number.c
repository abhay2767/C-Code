#include<stdio.h>
int main()
{
	int n,prime=1,i;
	printf("Enter value: ");
	scanf("%d",&n);
	for(i=2; i<n;i++)
	{
		if(n%i==0)
		{
			
			prime = 0;
			break;
		}
	}
	if( prime == 0 )
	{
		printf("This is Not Prime Number");
	}else{
		printf("This is Prime Number");
	}
}
