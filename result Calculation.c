#include<stdio.h>
int main()
{
	int hind,eng,math,sub;
	float percent;
	
//	int hind_per,eng_per,math_per;
	//printf("Enter the number for Hinde, English and Math:\n");
//	scanf("%d%d%d",&hind,&eng,&math);
    printf("Enter Hinde Marks: ");
    scanf("%d",&hind);
    printf("Enter English Marks: ");
    scanf("%d",&eng);
    printf("Enter Math Marks: ");
    scanf("%d",&math);
    
  /*  //ternary operator
    printf("\nMarks Obtain by the Student given below:\n");
	(hind >= 35) ? printf("You are passed in Hinde: %d\n",hind) : printf("You are failed in Hinde: %d\n", hind);
	(eng >= 35) ? printf("You are passed in English: %d\n",eng) : printf("You are failed in English: %d\n",eng);
	(math >= 35) ? printf("You are passed in Math: %d\n", math) : printf("You are failed in Math: %d\n",math);
  */
	sub = hind+eng+math;
    printf("\nTotal Marks Obtain: %d",sub);
    if((sub < 40) || (hind < 33) || (eng < 33) || (math <33)) // logical or operator
    {
    	printf("\nYou are fail %d\n",sub);
	}
	else{
		printf("\nYor are pass %d\n");
	}
    
	percent = (hind+eng+math)/3;
	printf("\nPercent Obtain: %f",percent);
	
	/*hind_per = hind/100*100;
	printf("Percent in Hinde: %d",hind_per);
	eng_per = eng/100*100;
	printf("\nPercent in English: %d",eng_per);
	math_per = math/100*100;
	printf("\nPercent in Math: %d",math_per);
	*/
	/*if(hind > 35 && eng > 35 && math > 35)
	{
		printf("You are Passed");
	}else
	{
		printf("Your are failed");
	}
	*/

	return 0;
}
