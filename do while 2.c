#include<stdio.h>
int main()
{
	int i = 0;
	int n;
	printf("Enter the Value: ");
	scanf("%d",&n);
	do{
		printf("The value of n is: %d\n",i+1);
		
		i++;
	}while(i<n);
	return 0;
}
