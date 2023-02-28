/*Calcular el nuevo salario de unobrero si obtuvo un incrementto del 25%
sobre su salario anterior*/

#include<stdio.h>

int main(){
	float salario, aumento, salarioT;
	
	printf("Cual es tu salario: ");
	scanf("%f", &salario);
	
	aumento = salario*0.25;
	salarioT = salario + aumento;
	
	printf("Tu salario con el aumento de 25 es: $%.2f", salarioT);
	return 0;
}
