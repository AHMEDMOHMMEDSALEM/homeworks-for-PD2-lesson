#include<stdio.h>

int main()

{
	int number, sum;
	
	printf("please enter the number:");
	scanf("%d",&number);
		
	if (number%2==0)
	
	    printf("the number %d is an even number ", number);       
		
	 else
	    printf("the number %d is an odd number ", number);
	    return 0;
}
