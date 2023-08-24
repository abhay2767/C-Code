//create a arary of 10 number. verify using pointer airthmetic that (ptr+2)point to the
//third element where ptr is a pointer pointing to the first element of the array.

#include<stdio.h>
int main()
{
	int ar[10];
	int *ptr = &ar[0];
	ptr = ptr+2;
	if(ptr == &ar[2])
	{
		printf("These point to the same location in memory\n");
	} 
	else{
		printf("These are not point to the same location in memory\n");
	}
	return 0;
}
