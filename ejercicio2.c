/*Danila Quiroz Cruz
ejercicio2
programa para validar si a b son par o impar.*/ 


# include <stdio.h>

void main ()
{
    int num;
    
    printf ("dame un numero: ");
    scanf ("%i",&num);

    if (num % 2 == 0)
    {
    printf ("el numero es par /n");
    }
    else
    {
    printf ("el numero es impar/n");
    }
}
