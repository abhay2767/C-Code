#include<stdio.h>
#include<string.h>
struct Employee{
	int code;
	float salary;
	char name[10];
};

int main(){
	struct Employee e1;
	e1.code = 21689;
	e1.salary = 150000.50;
	strcpy(e1.name,"Abhay Dubey");//strcpy is use for take input the string.
	
	printf("Employee Code:- %d\nEmployee salary:-%.2f\nEmployee Name:- %s",e1.code,e1.salary,e1.name);
	return 0;
}
