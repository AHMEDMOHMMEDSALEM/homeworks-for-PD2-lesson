#include<stdio.h>

int main()
{
	int num1, num2, num3;
	printf("Enter First Number:");
	scanf("%d", &num1);
	printf("Enter second Number:");
	scanf("%d", &num2);
	printf("Enter third  Number:");
	scanf("%d", &num3);
	if(num1>num2 , num1>num3)
	    printf("  the first number is the largest number.");
	    else 
	    printf("\n the fist number is the smallest number.");
	    if(num2>num1 , num2>num3)
	    printf("\n the second number is the largest number.");
	    else
	    printf("\n the second number is the smallest number.");
	    if(num3>num2 , num1<num3)
	    printf("\n the third number is the largest number.");
	    else 
	    printf("\n the third number is the smallest number.");
	    
	    return 0;
}
