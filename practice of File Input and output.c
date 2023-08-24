#include<stdio.h>
int main()
{
	FILE*ptr;
	ptr = fopen("practice.txt","r");
	int a,b,c;
	fscanf(ptr,"%d%d%d",&a,&b,&c);
	printf("The value of a, b and c is:- %d  %d  %d",a,b,c);
	fclose(ptr);
	
	return 0;
}
