#include <stdio.h>
#include <stdlib.h>

int main() {
/*
    //EJERCICIO 1: Muestra los números múltiplos de 5 de 0 a 100 utilizando un bucle for.
    int bucle;
    for (bucle = 0; bucle <= 100; bucle++) {
        if (bucle % 5 == 0) {
            printf("%d ", bucle);
        }
    }
    */
    //EJERCICIO 2: Muestra los números múltiplos de 5 de 0 a 100 utilizando un bucle while.
    /*
    int bucle = 0;
    while (bucle <= 100) {
        if (bucle % 5 == 0) {
            printf("%d ", bucle);
        }
        bucle++;
    }
    */

    //EJERCICIO 3: Muestra los números múltiplos de 5 de 0 a 100 utilizando un bucle do-while.
    /*
    int bucle = 0;
    do {
        if (bucle % 5 == 0) {
            printf("%d ", bucle);
        }
        bucle++;
    } while (bucle <= 100);
    */

    //EJERCICIO 4: Muestra los números del 320 al 160, contando de 20 en 20 utilizando un bucle for.
    /*
    int bucle;
    for (bucle = 320; bucle >= 160; bucle -= 20) {
        printf("%d ", bucle);
    }
    */

    //EJERCICIO 5: Muestra los números del 320 al 160, contando de 20 en 20 utilizando un bucle while.
    /*
    int bucle = 320;
    while (bucle >= 160) {
        printf("%d ", bucle);
        bucle -= 20;
    }
    */

    //EJERCICIO 6: Muestra los números del 320 al 160, contando de 20 en 20 utilizando un bucle do-while.
    /*
    int bucle = 320;
    do {
        printf("%d ", bucle);
        bucle -= 20;
    } while (bucle >= 160);
    */

    //EJERCICIO 7: Control de acceso a una caja fuerte. La combinación es un número de 4 cifras.
    /*
    const int COMBINACION_SECRETA = 1234;
    int intento;

    printf("Introduzca la combinacion de 4 cifras: ");
    scanf_s("%d", &intento);

    if (intento == COMBINACION_SECRETA) {
        printf("La caja fuerte se ha abierto satisfactoriamente.\n");
    } else {
        printf("Lo siento, esa no es la combinacion.\n");
    }
    */

    //EJERCICIO 8: Modifica el anterior para que tengamos cuatro oportunidades.
    /*
    const int COMBINACION_SECRETA = 4321;
    int intento;
    int intentos_restantes = 4;
    int acertado = 0;

    while (intentos_restantes > 0 && acertado == 0) {
        printf("Le quedan %d intentos. Introduzca la combinacion: ", intentos_restantes);
        scanf_s("%d", &intento);

        if (intento == COMBINACION_SECRETA) {
            printf("La caja fuerte se ha abierto satisfactoriamente.\n");
            acertado = 1;
        } else {
            printf("Lo siento, esa no es la combinacion.\n");
        }
        intentos_restantes--;
    }

    if (acertado == 0) {
        printf("Ha agotado todos sus intentos. La caja fuerte permanece cerrada.\n");
    }
    */

    //EJERCICIO 9: Realiza un programa que nos diga cuántos dígitos tiene un número introducido por teclado.
    /*
    int numero;
    int digitos = 0;

    printf("Introduce un numero para contar sus digitos: ");
    scanf_s("%d", &numero);

    if (numero == 0) {
        digitos = 1;
    } else {
        int temp = numero;
        if (temp < 0) temp = -temp;

        while (temp > 0) {
            temp = temp / 10;
            digitos++;
        }
    }

    printf("El numero %d tiene %d digito(s).\n", numero, digitos);
    */

    //EJERCICIO 10: Escribe un programa que diga si un número introducido por teclado es o no primo.
    /*
    int numero;
    int es_primo = 1;
    int divisor;

    printf("Introduce un numero para saber si es primo: ");
    scanf_s("%d", &numero);

    if (numero <= 1) {
        es_primo = 0;
    } else {
        for (divisor = 2; divisor <= numero / 2; divisor++) {
            if (numero % divisor == 0) {
                es_primo = 0;
                break;
            }
        }
    }

    if (es_primo == 1) {
        printf("El numero %d es primo.\n", numero);
    } else {
        printf("El numero %d no es primo.\n", numero);
    }
    */
}

