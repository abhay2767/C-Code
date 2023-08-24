#include<stdio.h>
#include<string.h>
struct teacher{
	int id;
	char name[10];
	float salary;
};
int main()
{
	struct teacher Abhay ={21689,"Dubey",16500.5};
	printf("Id is %d\nName is %s\nSalary is %.1f\n",Abhay.id,Abhay.name,Abhay.salary);
	return 0;
}
