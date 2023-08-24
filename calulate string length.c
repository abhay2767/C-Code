#include<stdio.h>
#include<string.h>
/*int strlen(char*st1)
{
	char*ptr = st1;
	int len = 0;
	while(ptr = '\0')
	{
		len++;
		ptr++;
	}
	return len;
}*/
int main()
{
	char st1[] = "Abhay";
//	int len = strlen(st1);
	printf("The length of String is:- %d",strlen(st1));
	return 0;
}
