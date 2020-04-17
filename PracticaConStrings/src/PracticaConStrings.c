/*
 ============================================================================
 Name        : PracticaConStrings.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include <string.h>

int isNaN(char* cadena);

int main(void)
{
	char string[100]="HOLA\n";
	int longitud;
	int edad;
	char bufferStr[4096];

	printf("%s", string);
	strcpy(string,"HOLA MUNDO\n"); // Para cargar informacion a una cadena de caracteres

	printf("%s", string);
	longitud = strlen(string); // Mido la longitud del string
	printf("%d", longitud);

	printf("Edad?\n");
	//scanf("%d",&edad);
	scanf("%s",bufferStr);
	if(isNaN(bufferStr))
	{
	edad = atoi(bufferStr); // ATOI: de cadena de caracteres a entero
	printf("Tu edad es %d", edad);
	}
	return EXIT_SUCCESS;
}

int isNaN(char* cadena)
{
	int retorno = 1;
	int i = 0;
	for(i=0;cadena[i]!='\0';i++)
	{
		if(cadena[i] > '9' || cadena[i]<'0')
		{
			retorno = 0;
			break;
		}
	}
	return retorno;
}
