#include<stdio.h>

char main()
{
	int temperature;
	
	printf("enter temperature: ");
	scanf("%d",&temperature);
	if (temperature<=32)
	    printf("Weather Temperature is Below The Freezing Point. ");
	    
	    else 
	    printf("Weather Temperature is Above The Freezing Point. ");
	    
	    return 0;
	
	
}
