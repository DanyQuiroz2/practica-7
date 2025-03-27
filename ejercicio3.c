/*Daniela Quiroz Cruz
ejercicio2
programa para validar si a es mayor a b.*/ 


# include <stdio.h>
# include <math .m>

void main ()
{
    int op, num1, num2;
    do
    {
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
       res= num1+ num2;
       break;
        case 2:
       printf ("dame un numero: ");
       scanf ("%i",&num1);
       printf ("dame otro numero:");
       scanf ("%i",&num2);
       res= num1+ num2;
       break;
        case 3:
       printf ("dame un numero: ");
       scanf ("%i",&num1);
       printf ("dame otro numero:");
       scanf ("%i",&num2);
       res= num1+ num2;
       break;
           case 4:
       printf ("dame un numero: ");
       scanf ("%i",&num1);
       printf ("dame otro numero:");
       scanf ("%i",&num2);
       res= num1+ num2;
       break;
    }
    printf("el resultado de la operacion es:%1\n")
    if (num % 2 == 0)
    {
  
}
