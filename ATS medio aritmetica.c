//Media geometrica de los numeros

#include<stdio.h>
#include<math.h>

int main(){
    float x, y, z, suma, final;

    printf("Ingresa tus tres numeros: ");
    scanf("%f %f %f", &x, &y, &z);

    suma= (x+y+z);
    final=pow(suma, (float)1/3);

    printf("La media geometrica de los numeros es: %.2f", final);

    return 0;
    }
