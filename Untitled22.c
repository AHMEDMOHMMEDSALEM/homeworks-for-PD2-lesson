#include <stdio.h>
 
int main()
{
  	int num, F, G, L, A, B, sum;
 
    
  	printf(" Please Enter number: ");
  	scanf("%d", & num);
  	
  	
  	G = log10(num); 
  	F = num / pow(10, G);
  	L = num % 10;
  	A = F * (pow(10, G));
  	B = num % A;
  	num = B / 10;
  	sum = L * (pow(10, G)) + (num * 10 + F);
  	
     printf(" \n The number after Swapping First Digit and Last Digit =  %d", sum);
 
  	return 0;
}
