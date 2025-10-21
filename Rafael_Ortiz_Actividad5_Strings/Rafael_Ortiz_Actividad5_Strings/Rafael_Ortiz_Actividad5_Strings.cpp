#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main()
{
	// 1. Dada una palabra realizar las siguientes operaciones
	// a.Leerla y escribir la palabra dada
	// b.Escribir la palabra al revés
	// c.Sacar un mensaje en donde diga si la palabra es palíndroma

	char word1[50];
	int palindrome = true;
	int length = 0;

	printf("Ejercicio 1:\n\nDada una palabra realizar las siguientes operaciones:\na.Leerla y escribir la palabra dada\nb.Escribir la palabra al reves\nc.Sacar un mensaje en donde diga si la palabra es palindroma\n\n");

	printf("Dame una palabra: ");
	gets_s(word1);
	printf("\nLa palabra dada es: %s\n", word1);

	length = strlen(word1);

	printf("La palabra al reves es: ");
	
	for (int i = length; i >= 0; i--)
	{
		printf("%c", word1[i]);
	}
	printf("\n\n");
	
	for (int i = 0; i < length/2; i++)
	{
		if (word1[i] != word1[length - 1 - i])
		{
			palindrome = false;
		}
	}
	
	if (palindrome == true)
	{
		printf("La palabra %s es palindroma.\n", word1);
	}

	else
	{
		printf("La palabra %s no es palindroma.\n", word1);
	}
	
	// 2.Escribir un programa que lea una frase y determine la frecuencia de aparición de cada vocal con respecto al total de caracteres de la frase.
	printf("\n\nEjercicio 2:\n\nEscribir un programa que lea una frase y determine la frecuencia de aparicion de cada vocal con respecto al total de caracteres de la frase.\n\n");

	char sentence1[100];
	int vocalCount[5] = { 0 };
	char vocal[5] = {'a','e','i','o','u'};
	float frequency;

	printf("Dame una frase: ");
	gets_s(sentence1);

	length = strlen(sentence1);

	if (length > 0)
	{
		printf("La frase tiene %d caracteres.\n", length);

		for (int i = 0; i < length; i++)
		{
			switch (sentence1[i])
			{
			case 'a':
			case 'A':
				vocalCount[0]++;
				break;
			case 'e':
			case 'E':
				vocalCount[1]++;
				break;
			case 'i':
			case 'I':
				vocalCount[2]++;
				break;
			case 'o':
			case 'O':
				vocalCount[3]++;
				break;
			case 'u':
			case 'U':
				vocalCount[4]++;
				break;
			}
		}

		for (int i = 0; i < 5; i++)
		{
			if (vocalCount[i] > 0)
			{
				frequency = (vocalCount[i] * 1.0 / length) * 100.0;
				printf("Vocal '%c': %0.2f porciento de veces.\n", vocal[i], frequency);
			}
		}
	}
	else
	{
		printf("No has introducido ninguna frase.");
	}
	
	// 3.Escribe un programa que lea del teclado una cadena y construya y muestre en la pantalla otra cadena en la que cada vocal haya sido remplazada por un punto.
	printf("\n\nEjercicio 3:\n\n3.Escribe un programa que lea del teclado una cadena y construya y muestre en la pantalla otra cadena en la que cada vocal haya sido remplazada por un punto.\n\n");

	char sentence2[100];

	printf("Introduce una cadena de caracteres: ");
	gets_s(sentence2);

	length = strlen(sentence2);

	for (int i = 0; i < length; i++)
	{
		switch (sentence2[i])
		{
		case 'a':
		case 'A':
			sentence2[i] = '.';
			break;
		case 'e':
		case 'E':
			sentence2[i] = '.';
			break;
		case 'i':
		case 'I':
			sentence2[i] = '.';
			break;
		case 'o':
		case 'O':
			sentence2[i] = '.';
			break;
		case 'u':
		case 'U':
			sentence2[i] = '.';
			break;
		}
	}
	if (length > 0)
	{
		printf("%s", sentence2);
	}
	else
	{
		printf("No has introducido una frase.\n");
	}

	// 4.Escribe un programa que lea del teclado una cadena y muestre en la pantalla la cantidad de consonantes y de vocales que contiene.
	printf("\n\nEjercicio 4:\n\nEscribe un programa que lea del teclado una cadena y muestre en la pantalla la cantidad de consonantes y de vocales que contiene.\n\n");

	char sentence3[100];
	int vocalCounter = 0;
	int consCounter = 0;

	printf("Introduce una cadena de caracteres: ");
	gets_s(sentence3);

	length = strlen(sentence3);

	for (int i = 0; i < length; i++)
	{
		if (sentence3[i] != ' ')
		{
			switch (sentence3[i])
			{
			case 'a':
			case 'A':
				vocalCounter++;
				break;
			case 'e':
			case 'E':
				vocalCounter++;
				break;
			case 'i':
			case 'I':
				vocalCounter++;
				break;
			case 'o':
			case 'O':
				vocalCounter++;
				break;
			case 'u':
			case 'U':
				vocalCounter++;
				break;
			default:
				consCounter++;
				break;
			}
		}
	}
	if (length > 0)
	{
		printf("Numero de vocales: %d\nNumero de consonantes: %d\n", vocalCounter, consCounter);
	}
	else
	{
		printf("No has introducido una frase.\n");
	}
	
	// 5.Escribir un programa que lea una frase y a continuación visualice cada palabra de la frase una debajo de otra, seguida cada palabra del número de letras que compone cada palabra.
	printf("\n\nEjercicio 5:\n\nEscribir un programa que lea una frase y a continuacion visualice cada palabra de la frase una debajo de otra, seguida cada palabra del numero de letras que compone cada palabra.\n\n");

	char sentence4[100];
	int wordLength = 0;

	printf("Introduce una frase: ");
	gets_s(sentence4);

	for (int i = 0; i < strlen(sentence4); i++)
	{
		if (sentence4[i] != ' ')
		{
			printf("%c", sentence4[i]);
			wordLength++;
		}
		else if (wordLength > 0)
		{
			printf(" (%d letras)\n", wordLength);
			wordLength = 0;
		}
	}
	if (wordLength > 0)
	{
		printf(" (%d letras)\n", wordLength);
	}
	else
	{
		printf("No has introducido una frase.");
	}

	// 6. Escribir un programa que lea una frase y sustituya todas las secuencias de dos o más blancos por un solo blanco y visualice la frase.

	printf("\n\nEjercicio 6:\n\nEscribir un programa que lea una frase y sustituya todas las secuencias de dos o más blancos por un solo blanco y visualice la frase.\n\n");

	char sentence5[100];
	char sentence5Clean[100];
	int j = 0;

	printf("Introduce una frase: ");
	gets_s(sentence5);

	for (int i = 0; sentence5[i] != '\0'; i++)
	{
		if (sentence5[i] != ' ' || (j > 0 && sentence5Clean[j - 1] != ' '))
		{
			sentence5Clean[j] = sentence5[i];
			j++;
		}
		
	}
	sentence5Clean[j] = '\0';
	printf("\nFrase sin espacios: %s", sentence5Clean);
}