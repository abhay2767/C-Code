#include<stdio.h>
#include<stdlib.h> // for random number generate
#include<time.h>   // for rchange the number every time when execute.
int main()
{
	int num,guess,nguess=1;
	srand(time(0));          //initialize rand() function here for change the number every time when execute the program and also add 
	                         //Header file #include<time.h>
	num = rand()%100+1;
	      //generate random number using rand() function and [%100+1;] is for number come from 1 to 100.
//	printf("The Number is %d\n",num);

	//keep the running loop untill the number is guessed
	do{
		printf("Guess the number between 1 to 100:\n");
		scanf("%d",&guess);
		if(guess>num)
		{
			printf("Lower number Please.\n");
		}
		else if(guess<num)
		{
			printf("Higher number Please.\n");
		}
		else{
			printf("You guess it in %d attempt.\n",nguess);
		}
		nguess++;
	}while(guess != num);
	return 0;
}
