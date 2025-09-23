#include <stdio.h>

int main()
{
    //1. Pedir y leer 2 números enteros; si los números son iguales multiplicarlos y mostrar el resultado, si el primer número es mayor que el segundo, realizar una resta y mostrar el resultado, si no realizar una suma y mostrarla por pantalla.
    int val1, val2, result;

    printf("Dame dos numeros enteros: ");
    scanf_s("%d %d", val1, val2);

    if (val1>val2)
    {
        result = val1 - val2;
        printf("El resultado es: %d\n", result);
    }
    else if (val1=val2)
    {
        result = val1 * val2;
        printf("El resultado es: %d\n", result);
    }
    else
    {
        result= val1 + val2;

    }
}