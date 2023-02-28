/* Programa que calcule longitudes de
Circunferencia*/

#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main(){
	float radio=0, circu;
	
	printf("Ingresa el radio: ");
	scanf("%f", &radio);
	
	circu = ((2*radio)*PI);
	
	printf("La circunferencia es: %.2f", circu);
	
	return 0;
}
