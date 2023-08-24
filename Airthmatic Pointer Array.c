#include<stdio.h>
int main(){
	int i =5;
	printf("Address of i %u\n",&i); //output is 6487572
	int *j =&i;
	printf("Address of i using *j %u\n",j);//output is 6487572
	j++;//here address will increse according to the size of varibale stor in memory
	//integer = 4 byte than 
//	j++; //+4 byte
//	j++;//4+4 = 8 byte
//  j++;//4+4+4 = 12 byte address will increase.
	printf("Address of i using *j with increment j++:- %u\n",j);//output is 6487576(increse by 4 byte)
//	printf("Address of i whose address assign in *j and incremented j++ is:- %u\n",*j);
//	printf("Value of i using *j is:- %d",j);


    j--;//here -4byte from address 
 //   j--;//4+4= -8 byte from address 
    printf("Address of i using *j with increment j++:- %u\n",j);
  //  j=j+1;//here only add 1 from address
    printf("Address of i using *j with increment j++:- %u\n",j);
	return 0;
}
