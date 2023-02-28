
#include<stdio.h>

int main (){

int fila,blanco,estrella,filas_total;
printf ("Digite el numero de filas: "); 
scanf ("%i",&filas_total);

for (fila=1;fila<=filas_total;fila++){
    for (blanco=filas_total-fila;blanco>=1;blanco--){
        printf (" ");
    }
    for (estrella=1;estrella<=fila;estrella++){
        printf ("* ");
}   printf ("\n");
}

return 0;
}
