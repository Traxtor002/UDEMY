#include <stdio.h>
#include <stdlib.h>

int main ()
{

int precio_base, kilometros;
float consumo, precio_final;

printf("Introduce el precio base del vehiculo\n");
scanf("%d", &precio_base);
printf("Introduce los kilometros");
scanf("%d", &kilometros);
printf("Introduce el consumo");
scanf ("%d", &consumo);

if (kilometros<20000 && consumo<=5)
{
    precio_final = precio_base * 1.2;

}
else if (kilometros>20000 && consumo<=5)
{
    precio_final =precio_base *1.1;

}
else if (consumo>5)
{
    precio_final=precio_base * 1.05;
}

printf("El precio final del vehiculo e: %.2df", precio_final);




}