//5. Sumar 1-2+3-4

#include<stdio.h>

int main(){
	  int num,i, suma=0, sum_par=0, sum_imp=0, ne;
	  
	  printf("Digite total de numeros a sumar: ");
	  scanf("%i",&num);
	  
	  i=1;
	  
	  while(i<=num){
	  	if(i%2==0){
	  		ne =i *(-1);
	  		sum_par += ne;
		  }
		else{
			sum_imp +=i; 
		}
		i++;
	  }
	  
	  suma =sum_par +sum_imp;
	  
	  printf("\n La suma total es: %i",suma);
	  
	return 0;
}
