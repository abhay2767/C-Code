#include<stdio.h>
int main()
{
	int n = 3;
	int m = 5;
	int marks[3][5];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter marks of student %d is in subject %d\n",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Marks of student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
		}
	}
	return 0;
}
