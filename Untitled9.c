#include<stdio.h>

void main()

{
	int a, b;
	printf("enter frist number:");
	scanf("%d", &a);
	printf("enter second number:");
	scanf("%d", &b);
	
    if (a == 0 && b == 0)
        return 0;
    else if (a == 0)
        return b;
    else if (b == 0)
        return a;
 
    else if (a == b)
        return a;
 
    else if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
 
   int main()
   
{
    int a = 0, b = 56;
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}
