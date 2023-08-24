#include<stdio.h>
int main()
{
	FILE*ptr;
	int num1 = 45;
	ptr = fopen("generateed.txt","w"); //here we are write the file.
	fprintf(ptr,"The number is:- %d\n",num1);
	fprintf(ptr," Thanks for using fprintf for print in file anything",num1);
    fclose(ptr);


	return 0;
}
