#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you,char comp)
{
	//return 1 if you win , -1 if you lose and 0 if draw
	//condition for draw
	if(you == comp)
	{
		return 0;
	}
	//Not draw condition
	//1-sg && gs
	if(you == 's' && comp == 'g')
	{
		return -1;
	}
	else if(you == 'g' && comp == 's'){
		return 1;
	}
	//2-sw && ws
	if(you =='s' && comp == 'w'){
		return 1;
	}
	else if(you =='w' && comp == 's')
	{
		return -1;
	}
	//3-gww && wg
	if(you == 'g' && comp == 'w')
	{
		return -1;
	}
	else if(you == 'w' && comp == 'g'){
		return 1;
	}
}
int main()
{
	char you,comp;
	srand(time(0)); // generate randum number
	int number = rand()%100+1;// from 1 to 100
	comp = 's';
	if(number <33)
	{
		comp = 's';
	}
	else if(number > 33 && number < 66)
	{
		comp = 'w';
	}
	else{
		comp = 'g';
	}
	printf("Enter 's' for snake, and 'w' for water and 'g' for gun:- ");
	scanf("%c",&you);
	int result = snakeWaterGun(you,comp);
	
	if(result == 0)
	{
		printf("Game draw\n");
	}
	else if(result == 1)
	{
		printf("You win\n");
	}
	else{
		printf("You lose\n");
	}
	printf("You choose %c and computer choose %c\n",you,comp);
	return 0;
}
