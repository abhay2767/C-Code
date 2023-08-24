#include<stdio.h>
int main()
{
	char c;
	printf("Enter Characte: ");
	scanf("%c",&c);
	if(c <= 122 && c >= 97) // 97-122 = a-z
	{
		printf("Character is Lowwercase.");
	}
	else {
		printf("Character is Upercase.");
	}return 0;
}
