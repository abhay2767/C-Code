#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the Character from keyboard\n");
	scanf("%c",&ch);
	if(ch >= 65 && ch <= 90)
	printf("The character is an Uppercase letter\n");
	if(ch >= 97 && ch <= 122)
	printf("The charater is a Lowercase letter\n");
	if(ch >=48 && ch <= 57)
	printf("The character is Digit\n");
	if((ch >= 0 && ch <= 48) || (ch > 57 && ch < 65) || (ch > 90 && ch < 97) || (ch > 122))
	printf("The character is a special symbol\n");
	return 0;
}