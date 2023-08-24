#include<stdio.h>
void change(int b);
//here nothing is happen so dont worry so here wwe just check that wwe can not change the value
// of the function definition in main function. 
int main()
{
	int b = 123;
	printf("The value of b before change is %d\n",b);
	change(b);
	printf("The value of b after change is %d\n",b);
	
	
	return 0;
}
void change(int b)
{
	b = 77;
}
