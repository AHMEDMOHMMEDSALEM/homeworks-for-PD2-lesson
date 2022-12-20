#include<stdio.h>

int main()
{
	double A, B, C, D, E, F, G, H, L, M , Sum, Product; 
	
	printf("Enrter the first number:   ");
	scanf("%lf,", &A);
	printf("Enrter the second number:  ");
	scanf("%lf,", &B);
	printf("Enrter the third number:   ");
	scanf("%lf,", &C);
	printf("Enrter the forth number:   ");
	scanf("%lf,", &D);
	printf("Enrter the fifth number:   ");
	scanf("%lf,", &E);
	printf("Enrter the sixth number:   ");
	scanf("%lf,", &F);
	printf("Enrter the seventh number: ");
	scanf("%lf,", &G);
	printf("Enrter the eighth number:  ");
	scanf("%lf,", &H);
	printf("Enrter the ninth number:   ");
	scanf("%lf,", &L);
	printf("Enrter the tenth number:   ");
	scanf("%lf,",&M);
	Sum=(A+B+C+D+E+F+G+H+L+M);
	printf("Sum= %lf,", Sum);
	Product=(A*B*C*D*E*F*G*H*L*M);
	printf("\nProduct= %lf", Product);
	
	return 0;
	
	
	
}
