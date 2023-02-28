/*7.Una tienda ofrece un descuento del 15% sobre el total de la compra
y un cliente desea saber cuanto debera pagar finalmente por su compra.*/

#include<stdio.h>

int main(){
	float compraT, descuento, precio;
	
	printf("Total de su compra?: ");
	scanf("%f", &compraT);
	
	descuento = compraT*.15;
	precio = compraT-descuento;
	
	printf("Total de su compra con descuento: $%.3f", precio);
	
	return 0;
}
