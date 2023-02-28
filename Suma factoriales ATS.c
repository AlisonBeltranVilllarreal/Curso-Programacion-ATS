//Suma Factoriales
#include<stdio.h>

int main(){
 int i, n1, n2, factorial=1, factorial2=1, suma=0;
 
 printf("Digite el numero para hallar el factorial: ");
 scanf("%i", &n1);
 
 for(i=1;i<=n1;i++){
  factorial*= i;
 }
 
   printf("El factorial del numero dado es: %i\n", factorial);
 
        {
     printf("Digite el numero para hallar el segundo factorial: ");
 scanf("%i", &n2);
 
 for(i=1;i<=n2;i++){
  factorial2*= i;
 }
 
   printf("El factorial del segundo numero dado es: %i\n", factorial2);
      } 
   
   suma=factorial+factorial2;
   
    printf("\nLa suma de ambos factoriales es: %i", suma);
 
 return 0;
}
