#include<stdio.h>
#include<string.h>
int main()
{
	char *st = "Abhay";
	char st2[45];
	strcpy(st2,st);//this will copy st into str2 so now (st2 = "Abhay")
	printf("Now the st2 is:- %s",st2);
	return 0;
}
