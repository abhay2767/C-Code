#include<stdio.h>
#include<string.h>

struct employee{
	int id;
	char name[10];
	float salary;
};
void show(struct employee e)
{
	printf("Id is %d\nName is %s\nSalary is %.1f\n",e.id,e.name,e.salary);
}

int main()
{
	struct employee e1;
	e1.id=21689;
	strcpy(e1.name,"Abhay");
	e1.salary=15500.50;
	printf("Show details of employee:-\n");
	show(e1);
	
	return 0;
}

