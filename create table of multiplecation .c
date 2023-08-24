#include<stdio.h>
int main()
{
	
	FILE*ptr;
	ptr = fopen("table1.txt","w");
	int num,i;
	printf("Enter the integer value you need the table of:-\n");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		fprintf(ptr,"%d X %d = %d\n",num,i+1,num*(i+1));
	}
	fclose(ptr);
	printf("Succesfully generated file and table of %d to table.txt\n",num);
	return 0;
}
