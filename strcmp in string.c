#include<stdio.h>
#include<string.h>
int main()
{
	char st1[45] = "Abhay";
	char st2[45] = "Aahay";
	int val = strcmp(st1,st2);//compare two strings and return[0,1,-1]
	printf("Now the val is:= %d",val);
	return 0;
	//this function is used to compare two string.
	//it return: 0 if string is equal.
	//negative value if first strings character mismatching.
	//ASCII value is not greater than secand string corresponding maimatching character.
	//it return positive value otherwwise.
}
