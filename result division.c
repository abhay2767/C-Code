#include<stdio.h>
int main()
{
	int s1, s2, s3, s4, s5, percent;
	printf("Enter the marks of five Subject:\n");
	scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
	percent = (s1+s2+s3+s4+s5) * 100/500;
	if(percent >= 60)
	printf("First Division\n");
	else
	{
		if(percent >= 50)
		printf("Secand Division\n");
		else
		{
			if(percent >= 35)
			printf("Third Division\n");
			else
			printf("Fail\n");
		}
	}
	return 0;
}