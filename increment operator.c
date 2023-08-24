#include<stdio.h>
int main()
{
	int a = 5;
	printf("Value of a after a++:= %d\n", a++); //here output is 5 Because a++ mean is {First Print and than Increment}
	printf("Value of a:= %d\n\n", a);           //here output is 6 Because ++a mean is {First Increment and than Print}
	//Note--< a++ = 5
	//      a = 6 because here a take the value form the last value printed and there we also Increment the value so a = 5+1
	// here output is a = 6 
	a+=10;                                      //here output is 16 Because a+=10 mean we Increment value of a by 10.
	printf("Value of a after a+=  %d",a);
	
	return 0;
}
