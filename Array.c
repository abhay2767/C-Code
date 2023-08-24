#include<stdio.h>
int main()
{
	int marks[4];//allocate space for 4 integers.
//	marks[0] = 15;
//	marks[1] = 20;
//	marks[2] = 16;
//	marks[3] = 23;
//	marks[4] = 13;
	printf("Enter marks of the Student:-\n");
	scanf("%d%d%d%d%d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);
	printf("%d %d %d %d %d",marks[0],marks[1],marks[2],marks[3],marks[4]);
	return 0;
}
