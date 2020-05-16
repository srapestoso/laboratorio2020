/*
 ============================================================================
 Name        : Ordenamiento.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define QTY_EMPLEADOS 9

int printArrayint(int* pArray, int limite);
int ordenarArrayInt(int* pArray,int limite);


int main(void)
{
	int arrayEdades[QTY_EMPLEADOS]={54,26,93,17,77,31,44,55,27};
	int respuesta;

	printArrayint(arrayEdades,QTY_EMPLEADOS);
	respuesta = ordenarArrayInt(arrayEdades,QTY_EMPLEADOS);

	if(respuesta > 0)
	{
		printf("\n\n\n Iteraciones : %d\n\n", respuesta);
	}

	printArrayint(arrayEdades,QTY_EMPLEADOS);
	return EXIT_SUCCESS;
}

int printArrayint(int* pArray,int limite)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limite >=0 )
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			printf("\n[DEBUG] Indice : %d  -  Valor: %d",i,pArray[i]);
		}
	}
	return retorno;
}

int ordenarArrayInt(int* pArray,int limite)
{
	int flagSwap;
	int i;
	int contador=0;
	int retorno = -1;
	int buffer;

	if(pArray != NULL && limite >= 0)
	{

		do
		{
			flagSwap=0;
			for(i=0 ; i< limite ; i++)
			{
				contador++;
				if(pArray[i] < pArray[i+1])
				{
					flagSwap=1;
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
				}
				limite--;
			}

		}while(flagSwap);
		retorno = contador;
	}
	return retorno;
}
