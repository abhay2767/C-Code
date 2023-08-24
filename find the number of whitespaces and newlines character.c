#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[200],ch;
	int a = 0, space = 0, newline = 0;
	printf("\nEnter a string (escape to quit entering): ");
	ch = getche();
	while((ch != 27) && (a < 199))
	{
		str[a]=ch;
		if(str[a]=' ')
		{
			space++;
		}
		if(str[a]==13)
		{
			newline++;
			printf("\n");
		}
		a++;
		ch = getche();
	}
	printf("\nThe number of lines used: %d", newline+1);
	printf("\nThe number of space used: %d",space);
	getch();
}
