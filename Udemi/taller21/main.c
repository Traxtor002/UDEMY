#include<math.h>

int main ()
{
    struct  cilindro
    {
       float diametro;
       float carrera;
    };

    struct  motor
    {
        int identificador;
        struct cilindro cilindro1;
        int num_cilindros;
        float cilindrada;
       
    };

    struct motor motor1;

    printf ("Introduce el identificador\n");
    scanf ("%d", &motor1 .identificador);
    printf ("Introduce el diametro del cilindro (mm)\n");
    scanf ("%d", &motor1 .cilindro1.diametro);
    printf ("Introduce la carrera del cilindro (mm)\n");
    scanf ("%d", &motor1 .cilindro1.carrera);
    printf ("Introduce la carrera del cilindro (mm)\n");
    scanf ("%d", &motor1 .num_cilindros);

    motor1.cilindrada = (motor1.num_cilindros*(motor1.cilindro1.carrera/10)*M_PI*pow((motor1.cilindro1.diametro/10),2))/4;

    printf("Identificador: %d",motor1.identificador);
    printf("diametro(mm): %.2f",motor1.cilindro1.diametro);
    printf("carrera(mm): %.2f",motor1.cilindro1.carrera);
    printf("Identificador: %d",motor1.num_cilindros);
    printf("Identificador: %.2f",motor1.cilindrada);
   
    
    






}