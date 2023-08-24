#include<stdio.h>
int main()
{
	FILE*ptr;
//	FILE *ptr = fopen("abhay.txt","r");//for reading the file
//	FILE *ptr = fopen("abhay.txt","");//fro writing the file
	int num1,num2;
	ptr = fopen("abhay.txt","r"); //here we are read the file.
	fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
	printf("The value of num is %d\n",num1);
	printf("The value of num is %d\n",num2);
	
	return 0;
}
