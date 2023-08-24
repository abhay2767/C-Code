//write a program to take input from user for two string, first string using %s and
//secand string using %c and than cirfirm(Compare)using [strcmp()] that the string is equal.  

#include<stdio.h>
#include<string.h>
int main()
{
	char st1[10];
	char st2[10];
	char c;
	int i=0;
	printf("Enter First String:-\n");
	scanf("%s",&st1);
	printf("Enter Secand String character Wise:-\n");
	while(c != '\n')
	{
		fflush(stdin);//it is use when you want to enter flash character so this function helps.
		scanf("%c",&c);
		st2[i] = c;
		i++;
	}
	st2[i-1] = '\0';
	printf("The value of st2 is:- %s\n",st2);
	printf("The value of st1 is:- %s\n",st1);
   

/*	printf("Enter Secand String:-\n");
	scanf("%s",&st2);
*/	printf("Result is:- %d",strcmp(st1,st2));
	
	return 0;
}
