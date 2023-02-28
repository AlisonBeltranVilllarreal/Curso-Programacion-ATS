/*11. Dada una nota de un examen mediante un codigo escribir el literal
que le corresponde a l anota

A- exelente
B- notable
C- Aprobado
D y F - reprobado*/

#include<stdio.h>

int main(){
	char nota;
	
	printf("Digite la nota: ");
	scanf("%c",&nota);
	
	switch(nota){
		case 'A': printf("Exelente");break;
		case 'B': printf("Notable");break;
		case 'C': printf("Aprobado");break;
		case 'D': 
		case 'F': printf("Reprobado");break;
		default: printf("Se equivovo de nota");
	}
	return 0;
}
