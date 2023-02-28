//Contador Suma de pares

#include<stdio.h> 

int main(){

int numero,i,suma=0,total=0;
 printf("Imprime numero a calcular:");
 scanf("%i",&numero);
 for(i=1;i<=numero;i++){ 
   if(i%2==0){
   suma +=i;
   total++;
  }
    }
	printf("la suma total de los pares es:%i\n",suma);
	printf("Los numeros sumados fueron:%i",total);
 return 0;
}
