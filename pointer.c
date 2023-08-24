#include<stdio.h>
int main()
{
	int i = 10;
	int *j = &i; //Now 'j will store the address of 'i.
	printf("Address of i =  %u\n",&i);
	printf("Address of i =  %u\n",j);
	printf("Address of i =  %u\n",&i);
	printf("Value of i = %d\n",i);
	printf("Value of i = %d\n",*(&i));
	printf("Value of i = %d\n\n\n",*j);
	
	//*****Pinter to Pointer*****//
	printf("_____***Pointer to Pointer***_____\n");
	int **k;
	k = &j;
	printf("Value of k = %d\n",k);
//	printf("");
	return 0;
}
