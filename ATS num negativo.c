/*Comprobar si un numero digitado por el usuario es positivo o negativo*/

#include<stdio.h>

int main(){
	int num;
	
	printf("Ingrese su numero: ");
	scanf ("%i", &num);
	
	if( num>0){
		puts("Su numero es Positivo");
	}
	return 0;
}
