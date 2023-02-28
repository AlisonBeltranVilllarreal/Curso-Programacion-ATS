/* 1. Pedir 2 numeros al usuario y sumarlos, restarlos, multiplicarlos y dividirlos*/

#include<stdio.h>

int main(){
	int x,y, suma=0, resta=0, mult=0, div=0;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i", &x, &y);
	
	suma = x + y;
	resta = x - y;
	mult = x * y;
	div = x / y;
	
	printf("\nLa suma es: %i", suma);
	printf("\nLa resta es: %i", resta);
	printf("\nLa mult es: %i", mult);
	printf("\nLa div es: %i", div);
	
	return 0;
}
