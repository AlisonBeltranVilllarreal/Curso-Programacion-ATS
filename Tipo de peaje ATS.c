/* Seleccionar un tipo de vehiculo e indicar el peaje a pagar segun un
valor numerico
1- turistico, peaje =500
2- autobus, peaje =$3000
3- motocicleta. peaje=$300
caso contrario- vehiculo no autorizado*/

#include<stdio.h>
int main (){
 char vehiculo;
 printf("\nBienvenidos a mi programa para verificar el precio del peaje de un vehiculo");
 printf("\nPara elejir el vehiculo de tipo turismo tope el numero 1");
 printf("\nPara elejir el vehiculo de tipo autobus tope el numero 2");
 printf("\nPara elejir el vehiculo de tipo motobicicleta tope el numero 3");
 printf("\nIngrese el numero que desee: ");
 scanf("%c",&vehiculo);
 
 switch(vehiculo){
  case '1' :printf("\n El valor a pagar es $500");break;
  case '2' :printf("\n El valor a pagar es de $3000");break;
  case '3' :printf("\n El valor a pagar es de $300");break;
  default :printf("\n No ha ingresado ninguno numero de la lista");break;
  
 }
 
 return 0;
}
