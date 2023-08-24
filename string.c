#include<stdio.h>
int main()
{
	char st[] = {'A','B','H','A','Y','\0'};//Initialization of String.
	char *ptr = st;
    //Print string st1 using while loop
	while(*ptr != '\0')
    {
    	printf("%c",*ptr);
    	ptr++;
	}
	//Print Address of st String.
	printf("\nGiven String Address of st is:- \n'A' is %u\n'B' is %u\n'H' is %u\n'A' is %u\n'Y' is %u\n ",&st[0],&st[1],&st[2],&st[3],&st[4]);
	
	
	char st1[] = "ABHAY"; //Another way to initialize String.
	char i;
	////Print string st1 using for loop
	for(i=0;i<5;i++)
    {
    	printf("Given String st1 at st[%d] is:- %c\n ",i,st[i]);
	}
    
    //print string using pointer.
    char *st2 = "Abhay Dubey";
    char st3[] = "Dubey ji";
    printf("Given string  st2 is:-  %s\n",st2);
    printf("Given string  st3 is:-  %s",st3);
    //%s is format specifier like %d, %c, %f/
    //%s is use to print whole string ie- "Abhay Dubey".
    
    
	return 0;
}
