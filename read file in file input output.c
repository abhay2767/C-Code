#include<stdio.h>
int main()
{
	FILE*ptr;
	int num1,num2;
	char st;
	ptr = fopen("abhay1.txt","r"); //here we are read the file.
	if(ptr == NULL)
	{
		printf("This file does not exist\n");
	}
	else{
		fscanf(ptr,"%d",&num1);
        fscanf(ptr,"%d",&num2);
     //   fget((ptr),&st);
     //   fscanf(ptr,"%s",&st);
        fclose(ptr);
	    printf("The value of num is %d\n",num1);
	    printf("The value of num is %d\n",num2);
	  //  printf("The value of num is %s\n",st);
	}
	return 0;
}
