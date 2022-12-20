#include <stdio.h>
int main(){
   
    int num, F, L;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    
    L = num % 10;
    
    
    F = num;
    while (F >= 10){
        F = F / 10;
    }
    

    printf("First digit number is: %d \n", F);
    printf("Last digit number is: %d", L);
    
    return 0;
}
