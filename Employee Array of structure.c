#include<stdio.h>
#include<string.h>
struct Employee{
	int id;
	char name[10];
	float salary;
};

int main()
{
	struct Employee emp[100];//Array of structure
	emp[0].id = 21689;
	strcpy(emp[0].name,"Abhay");
	emp[0].salary = 6500.26;
	
	emp[1].id = 21689;
	strcpy(emp[1].name,"Dubey");
	emp[1].salary = 6500.26;
	
	emp[2].id = 22612;
	strcpy(emp[2].name,"Deepak");
	emp[2].salary = 7500.36;
	
	emp[3].id = 25689;
	strcpy(emp[3].name,"Shivam");
	emp[3].salary = 6080.96;
	
	emp[4].id = 65889;
	strcpy(emp[4].name,"Shyam");
	emp[4].salary = 4500.86;
	//so on up to 100
	
	printf("%d\n%s\n%.2f\n\n",emp[0].id,emp[0].name,emp[0].salary);
	printf("%d\n%s\n%.2f\n\n",emp[1].id,emp[1].name,emp[1].salary);
	printf("%d\n%s\n%.2f\n\n",emp[2].id,emp[2].name,emp[2].salary);
	printf("%d\n%s\n%.2f\n\n",emp[3].id,emp[3].name,emp[3].salary);
	printf("%d\n%s\n%.2f\n\n",emp[4].id,emp[4].name,emp[4].salary);
	return 0;
}
