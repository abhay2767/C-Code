#include<stdio.h>
int main()
{
	FILE*ptr;
	char c;
	ptr = fopen("getcdemo.txt","r");
	c = fgetc(ptr);
	while(c!=EOF)//EOF is last of file mean(END OF FILE = EOF)
	{
		printf("%c",c);
		c = fgetc(ptr);
	}
	
	return ;
}
