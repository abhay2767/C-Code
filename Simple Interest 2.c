#include<stdio.h>
int main()
{
	int p,n;
	float r, si;
	printf("Enter the Value of p, n, r");
	scanf("%d%d%f",&p,&n,&r);
	si = p*n*r/100;
	printf("%d\n",si);
	return 0;
}