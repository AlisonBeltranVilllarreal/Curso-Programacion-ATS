/*11. Calcular la cantida de segundos que estan includos en el numero de horas, minutos
y segundos ingresados por el usuario*/

#include<stdio.h>

int main(){
	int hr, min, seg, t1, t2, t3, total;
	
	printf("Numero de Horas: ");
	scanf("%i", &hr);
	printf("Numero de Minutos: ");
	scanf("%i", &min);
	printf("Numero de Segundos: ");
	scanf("%i", &seg);
	
	t1= hr* 3600;
	t2= min* 60;
	t3= seg* 1;
	
	total= t1 + t2+ t3;
	
	printf("Tus segundos son: %i", total);
	
	return 0;
}
