#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter string\n");
	gets(str);//gets() is used for taking whole string as input
	puts(str);//puts() is used for print whole string which is taking using gets().
	return 0;
}
