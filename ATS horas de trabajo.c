/*Dadas las horas trabajadas de una persona y el valor por hora.
Calcular su salario e imprimirlo*/

#include<stdio.h>

int main(){

        float horas, precioH,precioF;

        printf("Cuantas horas trabajaste? ");
        scanf("%f", &horas);
        printf("\nCuanto te pagan por hora? ");
        scanf("%f",&precioH);

        precioF=horas*precioH;

        printf("\nTu salario final es de: $%.2f",precioF);

    return 0;
}
