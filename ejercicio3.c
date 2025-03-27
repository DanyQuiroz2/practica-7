/*Daniela Quiroz Cruz
ejercicio2
programa para validar si a es mayor a b.*/ 


# include <stdio.h>
# include <math .m>

void main ()
{
    int op, num1, num2;
    
    printf ("menu: \n");
    printf ("escoge una opcion \n");
    printf ("1, - suma: \n");
    printf ("2, - resta: \n");
    printf ("3, - multiplicacion\n");
    printf ("4, - division \n");
    printf ("5, - raiz \n");
    printf ("6, - potencia \n");
    printf ("0, - salida \n");
    printf ("opcion:");
    scanf ("%i",&op);
    }   
    while (op<0 || op>6);
    
    do
    {
        
    }
    
    switch (op)
    {
        case 1:
       printf ("dame un numero: ");
       scanf ("%i",&num1);
       printf ("dame otro numero:");
       scanf ("%i",&num2);
    }
    if (num % 2 == 0)
    {
    printf ("el numero es par /n");
    }
    else
    {
    printf ("el numero es impar/n");
    }
}
