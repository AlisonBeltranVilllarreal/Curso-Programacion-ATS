//5. Calcular areas de trapecios

#include<stdio.h>

int main(){
	int base_M, base_m,area,altura;
	
	printf("Digite la base mayor: ");
	scanf("%i",&base_M);
	printf("\nDigite la base menor: ");
	scanf("%i",&base_m);
	printf("\nDigite la altura: ");
	scanf("%i",&altura);
	
	area = ((base_M+base_m)*altura)/2;
	
	printf("\nEl area del trapecio es: %i",area);
	return 0;
	
}
