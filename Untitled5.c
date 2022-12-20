#include<stdio.h>

int main()
{
	double F,  C;
	printf("Enter Fahreneit:");
	scanf("%lf", &F); 
	C=(F-32)*0.555555556; 
	printf("%lf",C);
	
	return 0;
	
}
