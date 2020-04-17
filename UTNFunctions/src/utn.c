/*
 * utn.c
 *
 *  Created on: 4 abr. 2020
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int getInt(int* pResultado);
static int esNumerica(char* cadena);

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	system("CLS()");
	setbuf(stdout,NULL);
	 int ret=-1;
	 int num;
	 if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	 {
		 do
		 {
			 printf("%s",mensaje);
			 if (getInt(&num)==1) //si getInt=1 puedo escribir la variable
			 {
				 if(num<=maximo && num>=minimo)
				 {break;}
			 }
			 fflush(stdin);// limpio buffer
			 reintentos--;
			 printf("%s",mensajeError);
		 }while(reintentos>=0);
		 if(reintentos>=0)
		 {
			 ret=1;
			 *pResultado = num;
		 }
	 }
return ret;
}
static int getInt(int* pResultado)
{
	int ret=-1;
	char buffer[64];
	fgets(buffer,sizeof(buffer),stdin);
	buffer[strlen(buffer)-1]='\0';
	if(esNumerica(buffer)==1) //tuve que cambiar para que valide todos los caracteres
	{
		*pResultado = atoi(buffer);
		ret=1;
	}
	return ret;
}
static int esNumerica(char* cadena)
{
	int ret=-1;
	int i=0;
	if(cadena!=NULL)
	{
		while(cadena[i]!='\0')
		{
			if(cadena[i]<'0' || cadena[i]>'9')
				{break;}
			i++;
		}
		if(cadena[i]=='\0')
		{ret=1;}
	}
return ret;
}
