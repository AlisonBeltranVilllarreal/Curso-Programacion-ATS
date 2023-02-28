//10. Factorial de un numero

#include<stdio.h>

int main(){
	int i, num, fact =1;
	
	printf("Digite el numero para hallar el Factorial: ");
	scanf("%i", &num);
	
	for(i=1; i<=num;i++){
		fact*=i;
	} 
	
	printf("El factorial del numero dado es: %i", fact); 
	return 0;
}
