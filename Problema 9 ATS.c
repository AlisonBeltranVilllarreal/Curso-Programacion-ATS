//9. Determinar si un Numero es primo o no

#include<stdio.h>

int main(){
	int i, num, cont=0;
	
	printf("Digite un numero: ");
	scanf("%i", &num);
	
	for(i=1; i<=num; i++){
		if(num%i==0){
			cont++;
		}
	}
	if(cont>2){
		printf("\n El numero es compuesto");
	}
	else{
		printf("\n El numero es primo");
	}
	return 0;
}
