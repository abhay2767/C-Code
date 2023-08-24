#include<stdio.h>
#include<string.h>
struct Salesman{
	int id;
	char name[10];
	float salary;
};
int main()
{
	struct Salesman s1;
	struct Salesman *ptr;
	ptr = &s1; 
	(*ptr).id = 21689;// or ptr->21689
	strcpy((*ptr).name,"Abhay");// or strcpy(ptr->name."Abhay");
	(*ptr).salary = 4550.54;// or ptr->
	printf("Id is %d\nName is %s\nSalary is %.1f\n\n",(*ptr).id,ptr->name,(*ptr).salary);
	                               //or//(*ptr).id   or  ptr->id this is arrow operator.
	printf("Id is %d\nName is %s\nSalary is %.1f\n",s1.id,s1.name,s1.salary);
	return 0;
}
