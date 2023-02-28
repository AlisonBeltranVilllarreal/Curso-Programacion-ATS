//Grados con Axel

#include<stdio.h>

int main(){
	float C, F;
	
	printf("Ingresa tus Grados Celsius: ");
	scanf("%f", &C);
	F= C*1.8+32;
	
	printf("\nLa conversion a Fahrenheit es: %.2f", F);
	
	return 0;
	
}
