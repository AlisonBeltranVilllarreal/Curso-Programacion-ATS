/* Mostrar los meses del año, pidiendole al
usuario un numero entre (1-12)
y mostrar el mes al que corresponde*/

#include<stdio.h>
#include<stdlib.h>
int main(){
 int mes;
 char salir;
 printf("Digite un numero entre el 1 y el 12: ");
 scanf("%i",&mes);
 switch(mes){
  case 1: printf("Enero");break;
  case 2: printf("Febrero");break;
  case 3: printf("Marzo");break;
  case 4: printf("Abril");break;
  case 5: printf("Mayo");break;
  case 6: printf("Junio");break;
  case 7: printf("Julio");break;
  case 8: printf("Agosto");break;
  case 9: printf("Septiembre");break;
  case 10: printf("Octubre");break;
  case 11: printf("Noviembre");break;
  case 12: printf("Diciembre");break;
 }
 fflush(stdin);
 printf("\nDigite el numero 0 para limpiar la pantalla: ");
 scanf("%c",&salir);
 if(salir=='0'){
  system("cls");
 }
 else{
  printf("No se ha limpiado la pantalla");
  fflush(stdin);
  printf("\nDigite nuevamente el numero 0 para limpiar la pantalla: ");
  scanf("%c",&salir);
  if(salir=='0'){
   system("cls");
   printf("Ahora se ha lipiado correctamente la pantalla");
  }
 }
 
 return 0;
}
