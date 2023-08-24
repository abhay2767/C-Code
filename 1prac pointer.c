//write a program having a variable 'i' print the address of 'i'
//pass this variable to a function and print its address.
//and check is these addresses are same or not and why.

#include<stdio.h>
void printAddress(int a)
{
	printf("The address of a is:-  %d\n",&a);
}

int main()
{
	int i = 4;
	printf("The value of varibale %d\n",i);//(1)
	printAddress(i);
	printf("The address of variable i %u",&i);
	//here address of 'i' is differnt from above 'i' (1), 
	//because here we pass 'i' in function so thats by 'i' store in memory at different address.  
	return 0;
}
