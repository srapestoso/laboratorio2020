/*
 ============================================================================
 Name        : getStrinhold.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>


int utn_getString(char string[], char* mensaje,char* mensajeError, char minimo,char maximo,int reintentos);

int main(void)

{
	setbuf(stdout, NULL);
	char texto[20];

	utn_getString(&texto[20],"Ingrese un nombre","SOLO LETRAS, reingrese un nombre",3,20,3);


}

int utn_getString(char string[], char* mensaje,char* mensajeError, char minimo,char maximo,int reintentos)
{
	int retorno = -1;
	int i;
	//char buffer;

	scanf("%s", string);

	if(string != NULL && reintentos!=0)
	{
		for(i=0;i<strlen(string);i++)
		{
			if(!( string[i] >= 65 && string[i] <= 90 || string[i] >= 97 && string[i] <= 122 ) )
			{
				printf("mensajeError");
				reintentos--;
				retorno = 0;
			}
		}
	}

	return retorno;
}
