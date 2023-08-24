#include<stdio.h>
#include<string.h>
int main()
{
	char s1[11] = "Hello";
	char s2[] = "Abhay";
	strcat(s1,s2);
	printf("Now the s1 is %s",s1);//add two string in first string.
	return 0;
}
