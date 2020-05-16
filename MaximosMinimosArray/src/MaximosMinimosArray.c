/*
 ============================================================================
 Name        : MaximosMinimosArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int buscarMaximo(int* pArrayN,int* pMaximo, int limite);
int printArrayint(int* pArray,int limite);
int buscarMinimo(int* pArrayN,int* pMinimo, int limite);

int main(void) {
	setbuf(stdout, NULL);
	int arrayNumeros[MAX];
	int i;
	int maximo;
	int minimo;

	for(i=0;i<MAX;i++)
	{
		printf("\nIngrese un numero: ");
		scanf("%d",&arrayNumeros[i]);
	}

		printf("Ingresaste : \n");
		printArrayint(arrayNumeros,MAX);
		if(buscarMaximo(arrayNumeros,&maximo,MAX)==0)
						{
							printf("\nEl maximo es : %d\n\n", maximo);
						}
		if(buscarMinimo(arrayNumeros,&minimo,MAX)==0)
								{
									printf("\nEl minimo es : %d\n\n", minimo);
								}

	return EXIT_SUCCESS;
}

int buscarMaximo(int* pArrayN,int* pMinimo, int limite)
{
	int i;
		int retorno= -1;

		for(i=0; i<limite ; i++)
		{
			if(i==0){
				*pMinimo = pArrayN[i];
			}
			if(pArrayN[i]>*pMinimo){
				*pMinimo = pArrayN[i];
			}
		retorno = 0;
		}

		return retorno;
}

int buscarMinimo(int* pArrayN,int* pMaximo, int limite)
{
	int i;
		int retorno= -1;

		for(i=0; i<limite ; i++)
		{
			if(i==0){
				*pMaximo = pArrayN[i];
			}
			if(pArrayN[i]<*pMaximo){
				*pMaximo = pArrayN[i];
			}
		retorno = 0;
		}

		return retorno;
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
