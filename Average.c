#include<stdio.h>
float average(int a,int b,int c);
int main()
{

	int a,b,c;
	printf("Average calculate\n");
    average(a,b,c);
	printf("Enter Value of A,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	//average();
    printf("The value of Result: %f",average(a,b,c));
	
	return 0;
}
float average(int a, int b, int c)
{
	float result;
	
	result = (float)(a+b+c)/3;
	return result;
}
