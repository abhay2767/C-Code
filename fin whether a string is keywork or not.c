#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

	int i, flag=0,m;
	char s[5][10]={"if","else","goto","continue","return"}, st[10];
	
	printf("\nEnter the String: ");
	gets(st);
	for(i=0;i<5;i++)
	{
		m = strcmp(st,s[i]);
		if(m==0)
		flag = 1;
	}
	if(flag == 0)
	{
		printf("\nIt is not a Keyword");
	}
	else{
		printf("\nIt is a Keyword");
	}
	getch();
}
