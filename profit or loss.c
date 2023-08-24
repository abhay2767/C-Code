#include<stdio.h>
int main()
{
	float cp,sp,p,l;
	printf("\n Enter the cost price and selling price:");
	scanf("%d%f",&cp,&sp);
	p = sp-cp;
	l = cp-sp;
	if(p>0)
	printf("The seller made a profit of Rs. %f\n", p);
	if(p<0)
	printf("The seller incurred loss of Rs. %f\n",l);
	if( p==0)
	printf(" There is no loss, No profit\n");
	return 0;
}