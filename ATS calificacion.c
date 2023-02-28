/* Un alumno desea saber cual sera se calificacion final en la materia de Algoritmos.
Dicha calificacion se compone de los siguientes porcentajes:
55% de promedio de sus tres calificaciones parciales
30% de la calificacion del examen final
15% de la calificacion de un trabajo final */

#include<stdio.h>

int main(){

        float cali1, cali2 ,cali3 ,caliF, exa, exaF, trabajo, trabajoF, total;

        printf("Anota tus tres calificaciones del semestre: ");
        scanf("%f %f %f", &cali1, &cali2, &cali3);

            caliF=((cali1+cali2+cali3)/3).55 ;

        printf("Anota la calificacion de su examen: ");
        scanf("%f", &exa);

            exaF=exa.30;

        printf("Anota la calificacion de tu trabajo: ");
        scanf("%f", &trabajo);

            trabajoF=trabajo*.15;

        total=caliF+exaF+trabajoF;

        printf("\nTu Calificacion final es de: %.2f",total);

    return 0;
}
