#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>

// Funciones compartidas
int GetNumber();
float GetNumberF();

// Ejercicio 1
void Ex1();
int Pair(int n1);

// Ejercicio 2
void Ex2();
float Average2(float n1, float n2);

// Ejercicio 3
void Ex3();
void Average3(float n1, float n2, float n3);

// Ejercicio 4

void Ex4();
void Salute();

// Ejercicio 5

void Ex5();
int Negative(int n1);

// Ejercicio 6

void Ex6();
float Sum(float n1, float n2);
float Minus(float n1, float n2);
float Product(float n1, float n2);
float Divide(float n1, float n2);

// Ejercicio 7

void Ex7();
void SumV(float n1, float n2);
void MinusV(float n1, float n2);
void ProductV(float n1, float n2);
void DivideV(float n1, float n2);

// --- Función Principal ---

int main()
{
    Ex1();

    Ex2();

    Ex3();

    Ex4();

    Ex5();

    Ex6();

    Ex7();

    return 0;
}

// --- Definiciones de Funciones ---

// --- Funciones compartidas ---
int GetNumber()
{
    int number;
    printf("Dame un numero entero: ");
    scanf_s("%d", &number);
    return number;
}

float GetNumberF()
{
    float number;
    printf("Dame un numero real: ");
    scanf_s("%f", &number);
    return number;
}

// --- Ejercicio 1 ---

void Ex1()
{
    int n1;
    int pairResult;

    printf("Ejercicio 1:\n");

    n1 = GetNumber();
    pairResult = Pair(n1);

    if (pairResult == 1)
    {
        printf("El numero %d es par.\n\n", n1);
    }
    else
    {
        printf("El numero %d es impar.\n\n", n1);
    }
}

int Pair(int n1)
{
    if (n1 % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// --- Ejercicio 2 ---

void Ex2()
{
    float n1, n2;
    float averageResult;

    printf("Ejercicio 2:\n");

    n1 = GetNumberF();
    n2 = GetNumberF();

    printf("La media es: %.2f\n\n", Average2(n1, n2));
}

float Average2(float n1, float n2)
{
    float result;

    result = (n1 + n2) / 2;

    return result;
}

// --- Ejercicio 3 ---

void Ex3()
{
    float n1, n2, n3;

    printf("Ejercicio 3:\n");

    n1 = GetNumberF();
    n2 = GetNumberF();
    n3 = GetNumberF();

    Average3(n1, n2, n3);
}

void Average3(float n1, float n2, float n3)
{
    float result;

    result = (n1 + n2 + n3) / 3;

    printf("La media es: %.2f\n\n", result);
}

// --- Ejercicio 4 ---

void Ex4()
{
    printf("Ejercicio 4:\n");
    Salute();
}

void Salute()
{
    printf("Hola\n\n");
}

// --- Ejercicio 5 ---

void Ex5()
{
    int n1;

    printf("Ejercicio 5:\n");

    n1 = GetNumber();

    if (Negative(n1) == 1)
    {
        printf("El numero %d es negativo", n1);
    }
    else
    {
        printf("El numero %d es positivo", n1);
    }
}

int Negative(int n1)
{
    if (n1 < 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

// --- Ejercicio 6 ---

void Ex6()
{
    float n1, n2;

    printf("\nEjercicio 6:\n");

    n1 = GetNumberF();
    n2 = GetNumberF();

    printf("El resultado de la suma es: %.2f\n", Sum(n1, n2));
    printf("El resultado de la resta es: %.2f\n", Minus(n1, n2));
    printf("El resultado de la multiplicacion es: %.2f\n", Product(n1, n2));
    printf("El resultado de la division es: %.2f\n", Divide(n1, n2));
}

float Sum(float n1, float n2)
{
    float result;

    result = n1 + n2;

    return result;
}

float Minus(float n1, float n2)
{
    float result;

    result = n1 - n2;

    return result;
}

float Product(float n1, float n2)
{
    float result;

    result = n1 * n2;

    return result;
}

float Divide(float n1, float n2)
{
    float result;

    result = n1 / n2;

    return result;
}

// --- Ejercicio 7 ---

void Ex7()
{
    float n1, n2;

    printf("\nEjercicio 7:\n");

    n1 = GetNumberF();
    n2 = GetNumberF();

    SumV(n1, n2);
    MinusV(n1, n2);
    ProductV(n1, n2);
    DivideV(n1, n2);
}

void SumV(float n1, float n2)
{
    float result;

    result = n1 + n2;

    printf("El resultado de la suma es: %.2f\n", result);
}

void MinusV(float n1, float n2)
{
    float result;

    result = n1 - n2;

    printf("El resultado de la resta es: %.2f\n", result);
}

void ProductV(float n1, float n2)
{
    float result;

    result = n1 * n2;

    printf("El resultado de la multiplicacion es: %.2f\n", result);
}

void DivideV(float n1, float n2)
{
    float result;

    result = n1 / n2;

    printf("El resultado de la division es: %.2f\n", result);
}
