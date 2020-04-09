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

int utn_getNumero(int* pResultado, char* mensaje,char* mensajeError,  int minimo, int maximo, int reintentos){
	int ret;
	int num;

		while(reintentos>=0)
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%d", &num);
			if(getInt(&num)==1){
			if(num <= minimo && num >= maximo ){
				break;}
				reintentos--;
				printf("%s", mensajeError);

			}
				if(reintentos == 0){
					ret = -1;
				}
				else{
					ret=0;
					*pResultado = num;
				}
				return ret;
}


static int getInt(int* pResultado){
	int ret = -1;
	char buffer[64];
	fgets(buffer,sizeof(buffer),stdin);
	buffer[strlen(buffer)-1]='\0';
	if(esNumerica(buffer)){
	*pResultado=atoi(buffer);
	ret = 1;
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
						ret=1;
		}
		return ret;
}
