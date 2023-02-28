/* Hacer un menu que considere las siguientes opciones:
caso1: Cubo de un numero
caso2: Numero par o impar
caso3: Salir */

#include<stdio.h>
#include<math.h>

int main(){
	int num,op;
	
	printf("\tMenu");
	printf("\n1. Cubo de un numero");
	printf("\n2. Numero par o impar");
	printf("\n3. Salir");
	printf("\nSelecciona tu opcion: ");
	scanf("%i",&op);
	
	switch(op){
		case 1:
			printf("Ingrese el numero para sacar el cubo: ");
			scanf("%i",&num);
			num = pow(num, (int)3);
			printf("El cubo del numero es: %i", num);
		break;
		
		case 2:
			printf("Ingrese un numero: ");
			scanf("%i", &num);
			
			if(num % 2 == 0){
			printf("Su numero es Par");
			}
			if(num % 2 == 1){
			printf("Su numero es Impar");
			}
		break;
		
		case 3: printf("Adios vuelva pronto :)"); break;
		default: printf("ERROR");
	}
	return 0; 
}
