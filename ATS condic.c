/*Problema 1: Comprobar si un alumno aprobo o no un examen
(aprueba si su nota es mayor a 10.5)*/

#include<stdio.h>

int main(){
	float examen;
	
	printf("Digite la nota del examen: ");
	scanf("%f", &examen);
	
	if(examen > 10.5){
	printf("El alumno esta aprobado");
	
	}
	return 0;
}
