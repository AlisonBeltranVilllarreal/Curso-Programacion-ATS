/* Bucle do- While hacer-mientras

sintaxis: 
		do{
			instrucciones...
		}while( condicion) */
//Mostrar los 10 primeros numeros
//saludo

#include<stdio.h>

int main(){
	int i;
	
	i=1;
	
	do{
		printf("%i. \n", i);
		i++;
	}while(i<=10);
	
	return 0;
}
