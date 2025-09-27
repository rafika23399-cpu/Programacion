#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   //1. Pedir y leer 2 números enteros; si los números son iguales multiplicarlos y mostrar el resultado, si el primer número es mayor que el segundo, realizar una resta y mostrar el resultado, si no realizar una suma y mostrarla por pantalla.
 /*   int val1, val2;
      int result;

    printf("Dame dos numeros enteros: ");
    scanf_s("%d %d", &val1, &val2);

    if (val1>val2)
    {
        result = val1 - val2;
        printf("El resultado es: %d\n", result);
    }
    else if (val1==val2)
    {
        result = val1 * val2;
        printf("El resultado es: %d\n", result);
    }
    else
    {
        result= val1 + val2;
        printf("El resultado es: %d\n", result);
    }*/

    //2. Pedir y leer tres números diferentes e imprimir el número mayor de los tres.
/*    float value1, value2, value3;
    
    printf("Introduce 3 numeros: ");
    scanf_s("%f %f %f", &value1, &value2, &value3);

    if (value1 > value2 && value1 > value3)  // Aqui me decia que esta linea es redundante, y he buscado el motivo y he echo el ejercicio abajo de una manera que me parece mas eficiente
    {
        printf("El numero mas grande es %0.0f .\n", value1);
    }
    else if(value2 > value1 && value2 > value3)
    {
        printf("El numero mas grande es %0.0f .\n", value2);
    }
    else
    {
        printf("El numero mas grande es %0.0f .\n", value3);
    }*/
/*    float value1, value2, value3;

    printf("Introduce 3 numeros: ");
    scanf_s("%f %f %f", &value1, &value2, &value3);
    
    float mayor = value1;
    
    if (value2 > mayor)
    {
        mayor = value2;
    }
    if (value3 > mayor)
    {
        mayor = value3;
    }
    printf("El numero mas grande es: %f\n  ", mayor);*/

    //3. Pedir por pantalla el número de horas trabajadas y determinar la cantidad de dinero que recibirá un trabajador por concepto de las horas extras trabajadas en una empresa, sabiendo que cuando las horas de trabajo exceden de 40, el resto se consideran horas extras y que estas se pagan al doble de una normal, el precio hora es de 20€.
/*    float totalH, extraH;
    float money;

    printf("Introduce el numero de horas trabajadas: ");
    scanf_s("%f", &totalH);

    if (totalH > 40)
    {
        extraH = totalH - 40;
        money = extraH * 20;
        printf("Has ganado %0.2f euros de tus horas extra.\n", money);
    }
    else
    {
        printf("No has realizado horas extra.\n");
    }*/

    //4. Calcular el número de pulsaciones que debe tener una persona por cada 10 segundos de ejercio aeróbico; la fórmula que se aplica cuando el sexo es femenino es : num_pulsaciones = (220 − edad) / 10 y si el sexo es masculino : num_pulsaciones = (210 − edad) / 10
/*    int age;
    float pulsations;
    char genre;

    printf("Introduce tu edad: ");
    scanf_s("%d", &age);

    printf("Introduce tu sexo: m = masculino | f = femenino\n");
    scanf_s(" %c", &genre,1);

    if (genre == 'f')
    {
        pulsations = (220 - age) / 10;
        printf("Al ser mujer, deberias tener %0.0f pulsaciones por cada 10s de ejercicio aeróbico.\n", pulsations);
    }
    else if (genre == 'm')
    {
        pulsations = (210 - age) / 10;
        printf("Al ser hombre, deberias tener %0.0f pulsaciones por cada 10s de ejercicio aeróbico\n", pulsations);
    }
    else
    {
        printf("No has introducido un sexo valido.\n");
    }*/
    //5. En una tienda se efectúa una promoción en la cual se hace un descuento sobre el valor de la compra total según el color de la bolita que el cliente saque al pagar en caja.Si la bolita es de color blanco no se le hará descuento alguno, si es verde se le hará un 10 % de descuento, si es amarilla un 25 %, si es azul un 50 % y si es roja un 100 % .Determinar la cantidad final que el cliente deberá pagar por su compra se sabe que solo hay bolitas de los colores mencionados.
/*La codificación de las bolitas :
1 - blanco
2 - verde
3 - amarilla
4 - azul
5 - roja*/
    
/*    srand(time(NULL));

    int randomNumber = (rand() % 5) + 1;

    float total,discount,finalTotal;
    char choose;
    int valorValido;

    do
    {
        printf("Introduce el precio total de la compra en euros: ");
   
        valorValido = scanf_s("%f", &total);

        if (valorValido != 1)
        {
            printf("Introduzca un valor valido\n");
            char valorDescartado;
            while (scanf_s("%c", &valorDescartado, 1) && valorDescartado != '\n')
            {
            }
        }
    } while (valorValido != 1);

    do
    {
        printf("Estimado cliente, desea usar el azar para ganar un descuento? Si = s | No = n \n");
        scanf_s(" %c", &choose, 1);

        if (choose != 's' && choose != 'n')
        {
            printf("Opción no válida. Por favor, introduce 's' para Sí o 'n' para No.\n");
        }
    } while (choose!='s' && choose!='n');

    if (choose == 's')
    {
        switch (randomNumber)
        {
        case 1:
            printf("Ha salido la BOLITA BLANCA\n");
            discount = 0;
            break;
        case 2:
            printf("Ha salido la BOLITA VERDE\n");
            discount = 0.10;
            break;
        case 3:
            printf("Ha salido la BOLITA AMARILLA\n");
            discount = 0.25;
            break;
        case 4:
            printf("Ha salido la BOLITA AZUL\n");
            discount = 0.50;
            break;
        case 5  :
            printf("Ha salido la BOLITA ROJA\n");
            discount = 1;
            break;
        }

        finalTotal = total * (1 - discount);
        printf("Se aplica un descuento del %.0f%%.\n", discount * 100);
        printf("El total a pagar es: %.2f euros.\n", finalTotal);

    }

    else
    {      
        finalTotal = total;
        printf("No se aplica ningún descuento.\n");
        printf("El valor total de tu compra es: %.2f euros.\n", finalTotal);
    }*/
}