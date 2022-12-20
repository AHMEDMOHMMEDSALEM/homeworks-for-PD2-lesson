#include<stdio.h>

int main()
{
	int num, T, R=0, D;
	
	printf("Enter the number:");
	scanf("%d", &num);
	
	
	T=num;
	
	while (T>0)
	{
		D = (T%10);
		R = (R*10)+D;
		T = (T/10);
	}
	 if (num==R)
	 
	    printf("the %d is a plandrome number",R);
	    else 
		
	    printf("the %d is not aplindrome number.", R);
	return 0;
}
