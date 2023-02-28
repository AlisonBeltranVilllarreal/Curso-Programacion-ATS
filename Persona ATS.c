/*ingrese por teclado el nombre, la edad y el sexo de cualquier persona e imprima,
solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona.*/

#include<stdio.h>

int main(){
	char nombre[30], sexo[10];
	int edad; 
	
	printf("Ingrese su nombre: ");
	gets(nombre);
	printf("Ingrese su sexo F o M: ");
	gets(sexo);
	printf("Ingrese su edad: ");
	scanf("%i", &edad);
	
	if(strcmp(sexo,"M")==0){
		if(edad>=18){
			printf("Usted esta viejo: %s", nombre);
		}
	}
	return 0;
}
