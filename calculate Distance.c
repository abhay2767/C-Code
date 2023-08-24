#include<stdio.h>
int main()
{
	float km, cm, m, ft, inch;
	printf("Enter the Distance:");
	scanf("%f",&km);
	m = km * 1000;
	cm = m* 100;
	inch = cm / 2.54;
	ft = inch/12;
	printf("Distance in meter = %f\n",m);
	printf("Distance in Cm = %f\n",cm);
	printf("Distance in Ft = %f\n", ft);
	printf("distance in inch = %f",inch);
	return 0;
}