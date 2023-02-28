/* 6.Ingrese un numero y cacule e imprima su raiz cuadrada. Si el numero es negativo
imprima el numero y un mensaje que diga "tienes raiz imaginaria"*/

#include<stdio.h>
#include<math.h>

int main(){
	float num;
	
	printf("Ingrese un numero: ");
	scanf("%f", &num);
	
	double raizCuadrada = sqrt(num);
	
	if(num>=0){
	printf("Su raiz cuadrada es: %.2lf", raizCuadrada);
    }
	else 
	if(num<0){
		printf("Tienes raiz imaginaria");
	}

	return 0;
}
