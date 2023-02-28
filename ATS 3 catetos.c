/*3. Sacar la hipotenusa de un triangulo rectangulo, 
pidiendo al usuario el valor de los 2 catetos */

#include<stdio.h>
#include<math.h>

int main(){
	float hipo, ct1, ct2;
	
	printf("Digite los 2 catetos: ");
	scanf("%f %f", &ct1,&ct2);
	
	hipo = sqrt(pow(ct1,2)+pow(ct2,2));
	
	printf("La hipotenusa del triangulo es: %.2f", hipo);
	
	return 0;
}


