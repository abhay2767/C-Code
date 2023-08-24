#include<stdio.h>
int main()
{
	int a;
	printf("Enter Number: ");
	scanf("%d",&a);
	while(a>10) //(a>50) //infinitr loop
	{
		printf("%d\n",a); 
		a++;
	}
}
