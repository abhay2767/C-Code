#include<stdio.h>
int main()
{
	int rating;
	printf("Enter Rating form 1 to 5 Number: ");
	scanf("%d",&rating);
	// Switch case
	switch(rating)
	{
		case 1:
			printf("Your rating is 1.");
			break;
		case 2:
			printf("Your ration is 2.");
			break;
		case 3: 
		    printf("Your ration is 3.");
		    break;
		case 4:
		    printf("Your rating is 4.");	
		    break;
		case 5:
		    printf("Your rating is 5.");
		    break;
		default :
		    printf("Invalid Ratng."); 	
			break;    
	}
	return 0;
}
