#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//Exercici 1: Diseñe un programa en C, que lea un vector de 20 posiciones, y luego determine:
	//-La suma de todos los valores
		//- El mayor de los valores, así como la posición del mismo.
		//Se sabe que dichos datos son de tipo entero.
		//El máximo se inicializa con el valor de la posición 0 del vector.

	printf("Ejercicio 1:\n\n");

	int v0[20] = { 2,9,1,7,6,5,4,3,2,13,100,19,28,37,36,25,24,23,22,21 };
	int max = 0;
	int count = 0;
	int sum = 0;

	for (int i = 0; i < 20; i++)
	{
		printf("Posicion %d: %d\n", i + 1, v0[i]);
	}
	
	for (int i = 0; i < 20; i++)
	{
		sum += v0[i];
	}

	printf("La suma de todos los valores del vector es: %d\n\n", sum);

	max = v0[0];

	for (int i = 0; i < 20; i++)
	{
		if (max < v0[i])
		{
			max = v0[i];
			count = i + 1;
		}
	}
	printf("El numero maximo es: %d y esta alojado en el puesto %d del vector\n\n\n", max, count);

	max = 0;

	//2. Diseñe un programa que lea un vector de 12 posiciones y guarde en un segundo vector el inverso del
	//primero y, en un tercer vector, una copia del primero sustituyendo los valores mayores que 5 por - 1.
	//Al finalizar, el programa debe mostrar los tres vectores por pantalla.

	printf("Ejercicio 2:\n\n");

	int v1[12];
	int v2[12];
	int v3[12];

	for (int i = 0; i < 12; i++)
	{
		printf("Introduzca el valor de la posicion %d del vector: ", i + 1);
		scanf_s("%d", &v1[i]);
		v2[11-i] = v1[i];
		v3[i] = v1[i];
		if (v3[i] > 5)
		{
			v3[i] = -1;
		}
	}

	printf("Vector 1:\n");

	for (int i = 0; i < 12; i++)
	{
		printf("Posicion %d: %d\n", i + 1, v1[i]);
	}

	printf("\nVector 2:\n");

	for (int i = 0; i < 12; i++)
	{
		printf("Posicion %d: %d\n", i + 1, v2[i]);
	}

	printf("\nVector 3:\n");

	for (int i = 0; i < 12; i++)
	{
		printf("Posicion %d: %d\n", i + 1, v3[i]);
	}

	//3. Realizar un algoritmo que solicite al usuario los elementos enteros de dos vectores de tres elementos y
	//calcule el producto escalar.

	printf("\n\nEjercicio 3:\n\n");

	int v4[3];
	int v5[3];
	int result = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("Introduce el valor para la posicion %d del vector 1: ", i + 1);
		scanf_s("%d", &v4[i]);

		printf("Introduce el valor para la posicion %d del vector 2: ", i + 1);
		scanf_s("%d", &v5[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		result += v4[i] * v5[i];
	}

	printf("El resultado del producto escalar es: %d\n", result);

	result = 0;

	//4. Realizar el siguiente ejercicio, dado dos vectores V1 y V2 de tipo entero, compara si el
		//componente de V1 es mayor al de V2, si es asi realiza una suma, de lo contrario realiza una resta, estos
		//calculos se tienen que guardar sobre un tercer vector V3 y se debe imprimir por pantalla el resultado.
		//Cada Vector es de 10 posiciones.

	printf("\nEjercicio 4:\n\n");

	int v6[10] = { 10,5,6,8,9,7,6,66,44,22 };
	int v7[10] = { 1,15,16,18,91,8,6,66,44,22 };
	int v8[10];

	for (int i = 0; i < 10; i++)
	{
		if (v6[i] > v7[i])
		{
			v8[i] = v6[i] + v7[i];
		}
		else
		{
			v8[i] = v6[i] - v7[i]; //Los valores salen negativos, pero el enunciado no especifica si debo restar el v1 al v2 o a la inversa.
		}

		printf("La posicion %d del vector 3 es: %d\n", i + 1, v8[i]); 
	}

	//5. Realizar una aplicación que realice las siguientes operaciones:
	//–Construya un vector de 5 elementos de tipo entero.
	//–Solicite al usuario los valores correspondientes a cada elemento.
	//–Encuentre el valor menor y lo muestre.
	//–Encuentre el valor mayor y lo muestre.
	//–Calcule la suma de los dos valores encontrados y añada el resultado al final del vector.
	//–Muestre el vector final.

	printf("\n\nEjercicio 5:\n\n");

	int v9[6];
	int min;

	for (int i = 0; i < 5; i++)
	{
		printf("Introduzca el valor de la posicion %d del vector: ", i + 1);
		scanf_s("%d", &v9[i]);
	}

	max = v9[0];
	min = v9[0];

	for (int i = 0; i < 5; i++)
	{
		if (max < v9[i])
		{
			max = v9[i];
		}
		if (min > v9[i])
		{
			min = v9[i];
		}
	}

	printf("El valor maximo es: %d\nEl valor minimo es: %d\n", max, min);

	result = max + min;
	v9[5] = result;

	for (int i = 0; i < 6; i++)
	{
		printf("La posicion %d del vector es: %d\n", i + 1, v9[i]);
	}

	//6. Realizar una aplicación que realice las siguientes operaciones :
	//-Construya un vector de 4 elementos de tipo entero.
	//- Solicite al usuario que ingrese los valores uno por uno.
	//- Si el dato que le están dando es mayor que 10, duplique el valor ingresado y guárdelo en el vector.
	//- Si no, guarde el número tal como está.
	//- Al final, muestre el vector resultante

	printf("\n\nEjercicio 6:\n\n");

	int v10[4];

	for (int i = 0; i < 4; i++)
	{
		printf("Introduzca el valor %d del vector: ", i + 1);
		scanf_s("%d", &v10[i]);

		if (v10[i] > 10)
		{
			v10[i] *= 2;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		printf("La posicion %d del vector es: %d\n", i + 1, v10[i]);
	}
	
	//7. Escribir un algoritmo que invierta los elementos de un vector de 6 elementos enteros sobre ella
	//misma.Imprimirlo antes y después de la inversión.Solo se puede crear un vector.Después de
	//realizar la modificación del vector calcula cuántos valores son pares dentro del vector.

	printf("\n\nEjercicio 7:\n\n");

	int v11[6] = { 2,3,4,5,6,7 };
	int temp;
	count = 0;

	for (int i = 0; i < 6; i++)
	{
		printf("La posicion %d del vector es: %d\n", i + 1, v11[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		temp = v11[i];
		v11[i] = v11[5 - i];
		v11[5 - i] = temp;
	}

	printf("Despues de girar:\n");
	for (int i = 0; i < 6; i++)
	{
		printf("La posicion %d del vector es: %d\n", i + 1, v11[i]);

	}

	for (int i = 0; i < 6; i++)
	{
		if (v11[i] % 2 == 0)
		{
			count += 1;
		}
	}
	printf("En el vector %d valores son pares.\n", count);
}

