//Determina si un numero es par, impar

#include<stdio.h>

int main(){
	int num;
	
	printf("Ingresa el numero: ");
	scanf("%i", &num);
	
	if(num % 2 == 0){
		printf("Su numero es Par");
	}
	if(num % 2 == 1){
		printf("Su numero es Impar");
	}
	
	return 0;
}

