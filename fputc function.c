#include<stdio.h>
int main()
{
	FILE*ptr;
	ptr = fopen("putcdemo.txt","w");
	putc('A',ptr);
	putc('B',ptr);
	putc('H',ptr);
	putc('A',ptr);
	putc('Y',ptr);
	fclose(ptr);
	return 0;
}
	
