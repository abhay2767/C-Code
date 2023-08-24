#include<stdio.h>
#include<math.h>
int main()
{
	int side;
	printf("Enter the value of the Side: ");
	scanf("%d",&side);
	printf("The value of Area is: %d",(int)pow(side,2)); 
	//default pow operator is use to find square so here we use it and above #include<math.h>
	// is compulsary to add header file when you use pow() operator 
	//and pow() operator return Double type value so we can use DataType casting for return int type.
	return 0;
}
