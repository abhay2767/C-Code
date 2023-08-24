#include<stdio.h>
int main()
{
	int a,b,c,d,e, agg;
	float per;
	printf("Enter the marks in five Subject:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	agg = a + b + c + d + e;
	per = agg/5;
	printf("Aggregate marks = %d\n", agg);
	printf("Percentage marks = %f\n", per);
	return 0;
}