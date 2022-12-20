#include<stdio.h>

int main()
{

    double n, n1, num = 0;

    printf(" Enter a positive integer :");
    scanf("%d", &n);

    n1 = n;
    
    while (n != 0)
    {
    	printf("\n%d",n);
        n=n/10; 
        num++;
    }

return 0;


}

