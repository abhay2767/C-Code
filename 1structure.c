//write a program to store the details of 3 student from user defined data type,
//take input from user and use the structure declared above.

#include<stdio.h>
#include<string.h>
struct Student{
	int roll_no;
	char name[10];
	float marks;
};
int main()
{
	struct Student s1,s2,s3;
	printf("Student1:-\n");
	printf("Enter roll no of Student1\n");
	scanf("%d",&s1.roll_no);
	printf("Enter Name of Student1\n");
	scanf("%s",s1.name);
	printf("Enter marks of Student1\n");
	scanf("%f",&s1.marks);
	
	printf("\nStudent2:-\n");
	printf("Enter roll no of Student2\n");
	scanf("%d",&s2.roll_no);
	printf("Enter Name of Student2\n");
	scanf("%s",s2.name);
	printf("Enter marks of Student2\n");
	scanf("%f",&s2.marks);
	
	printf("\nStudent3:-\n");
	printf("Enter roll no of Student3\n");
	scanf("%d",&s3.roll_no);
	printf("Enter Name of Student3\n");
	scanf("%s",s3.name);
	printf("Enter marks of Student3\n");
	scanf("%f",&s3.marks);

	return 0;
}
