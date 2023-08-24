#include<stdio.h>
int main()
{
  //char*ptr = "Abhay Dubey";
	char ptr[] = "Dubey ji";
	ptr = "Abhay Dubey Bhai"; //this will show you error becase
	//once a string is defined using (char ptr[]  = "Abhay Dubey";)
	// it can not be initialize to something else.
	printf("%s",ptr);
	return 0;
}
