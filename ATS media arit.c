//Media aritmetica de tres numeros
#include<stdio.h>

int main(){
	int num1,num2,num3,med;
	
	printf("Ingrese 3 numeros para calcular su media aritmetica: ");
	scanf("%i %i %i", &num1, &num2, &num3);
	
	med= (num1+num2+num3)/3;
	
	printf("La media artimetica es: %i", med);

 return 0;
}
