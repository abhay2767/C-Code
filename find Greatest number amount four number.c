#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter Numbers: \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("Big number is: %d",a);
			}
			else 
			{
				printf("Big number is: %d",d);
			}
		}
	}
	else if(b>c)
	{
		if(b>d)
		{
			printf("Big number is: %d",b);
		}
		else
		{
			printf("Big number is: %d",d);
		}
	}
	else if(c>d)
	{
		printf(" Big number is: %d",c);
	}
	else
	{
		printf(" Big number is: %d",d);
	}
	return 0;
}
