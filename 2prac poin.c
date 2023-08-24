//Write a program using function which calculate the sum and average of two number.
//and use pointer and print the value of sum and average in main().

#include<stdio.h>
void sumAvg(int a, int b,int *sum1, float *avg1);
int main()
{
	int i=4,j=5,sum;
	float avg;
	sumAvg(i,j,&sum, &avg);
	printf("Sum is:- %d\n",sum);
	printf("Average is:- %.2f\n",avg);
	return 0;
}
void sumAvg(int a, int b, int *sum1, float *avg1)
{
	*sum1 =  a+b;
	*avg1 = (float)(*sum1)/2;
}
