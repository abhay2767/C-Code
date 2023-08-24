#include<stdio.h>
int main()
{
	int age;
	char sex, ms;
	printf(" Enter Age, Sex, Maritial Status:\n");
	scanf("%d %c %c", &age, &sex, &ms);
	if((ms == 'M') || (ms == 'U' && sex == 'M' && age > 30) || (ms == 'U' && sex == 'F' && age>25))
	printf("driver should be insured\n");
	else
	printf("Driver should not be insured\n");
	return 0;
}