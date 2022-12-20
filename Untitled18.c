#include <stdio.h>
int main() 
{
    int a[10], number, A, B;
    printf("\n Please Enter the Number :  ");
    scanf("%d", &number);
    
    for(A = 0; number > 0; A++)
    {
        a[A] = number % 2;
        number = number / 2;
    }
    
    printf("\n Binary Number =  ");
    for(B = A - 1; B >= 0; B--)  {
        printf(" %d ", a[B]);
    }
    printf("\n");
    return 0;
}
