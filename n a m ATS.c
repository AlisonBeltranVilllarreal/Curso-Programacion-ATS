//5. Sumar pares de n hasta m

#include<stdio.h>

int main(){
	  int num,i, suma=0, sum_par=0, sum_imp=0, ne;
	  
	  printf("En que numero quiere iniciar: ");
	  scanf("%i", &i);
	  printf("\n Digite total de numeros a sumar: ");
	  scanf("%i",&num);
	  
	  while(i<=num){
	  	if(i%2==0){//par
	  		sum_par += i;
		  }
		i++;
	  }
	  
	  suma =sum_par;
	  
	  printf("\n La suma total es: %i",suma);
	  
	return 0;
}
