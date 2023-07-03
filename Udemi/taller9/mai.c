#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, contador_aprobados=0, contador_reprobados=0;
    float nota;

    printf9("Introduce el numero de alumnos:\n");

    scanf("%d", &n);

    for (int  i = i; i < n; i++)
    {
       printf("Introduce la nota del alumno %d\n",1);
       scanf("%f", &nota);

       if (nota>=5)
       {
        contador_aprobados++;;

       }
       else {
        contador_reprobados++;
       }
       
    }
    
    printf("El numero de alumnos aprobados es: %d y el de Alumnos reprobados es: %d\n", contador_aprobados, contador_reprobados);



}