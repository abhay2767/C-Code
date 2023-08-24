//typedef can use to create an alice name(nick name) for data type in c.
//typedef is most commanly use for structure.
//it just replace struct employee to emp

#include<stdio.h>
#include<string.h>

typedef struct employee{
	int id;
	char name[10];
	float salary;
}emp;
void show(emp e)
{
	printf("Id is %d\nName is %s\nSalary is %.1f\n",e.id,e.name,e.salary);
}

int main()
{
	emp e1;
	e1.id=21689;
	strcpy(e1.name,"Abhay");
	e1.salary=15500.50;
	printf("Show details of employee:-\n");
	show(e1);
	
	return 0;
}

