/*
 ============================================================================
 Name        : ProblemaDeClase6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 * HACERLO!!!!!!!!!!!!
*/

#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 10
/*
 * Hacer un programa que le pida 10 numeros al usuario y los guarde
 *  en un array
 *
 * 1) Analizar el array e imprimir:
 * Promedio
 * Maximo
 * Minmo
 *
 * 2) Pedirle al usuario que ingrese
 * un numero en indicar si el mismo está o no en el array
 *
 * 3)Imprimir el array ordenado de mayor a menor
 */

int calcularPromedio(int* pArrayN,float* pResultado,int limite);
int imprimirArray(int* pArrayN,int limite);
int buscarMaximo(int* pArrayN,int* pMaximo, int limite);
//int buscarMinimo(int* pArrayN[],int limite);
//int buscarNumero(int* pArray, int limite);
int ordenarArrayInt(int* pArray, int limite);

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	int arrayN[CANTIDAD]={10,23,28,55,100,7,43,18,34,60};
	//float mostrarPromedio;
	float promedio;
	int maximo;
	//int minimo;
	//int numero;

	do{
		printf("Ingrese una opcion: \n2_Calcular promedio, maximo y minimo:\n3_Buscar Numero\n4_Mostrar ordenado de Mayor a menor\n5_Salir\n");
		scanf("%d",&opcion);
		switch(opcion)
		{
		case 2:
			if(calcularPromedio(arrayN,&promedio,CANTIDAD)==0)
			{
				printf("\nEl promedio es :%.2f\n\n", promedio);
			}
			else{
				printf("\nError prro\n");
			}
				if(buscarMaximo(arrayN,&maximo,CANTIDAD)==0)
				{
					printf("\nEl maximo es : %d\n\n", maximo);
				}
			//minimo = buscarMinimo(arrayN,CANTIDAD);
			break;
		case 3:
			//buscarNumero(arrayN, CANTIDAD);
			break;
		case 4:
			ordenarArrayInt(arrayN, CANTIDAD);
			imprimirArray(arrayN, CANTIDAD);
			break;
		case 5:
			printf("\n\nSaliendo del programa . . .\n\n");
			break;
		default:
			printf("\nDato erroneo, reingrese: ");
			scanf("%d", &opcion);
			break;
		}
	}while(opcion!=5);
	return EXIT_SUCCESS;
}

int calcularPromedio(int* pArrayN,float *pResultado, int limite)
{
	int i;
	int retorno = -1;
	int acumulador=0;

		if(pArrayN !=NULL && limite >=0)
		{
				for(i=0; i< limite ; i++)
				{
					retorno = 0;
					acumulador = acumulador + pArrayN[i];
				}
			*pResultado = (float) acumulador / limite;
		}
	return retorno;
}

int ordenarArrayInt(int* pArray, int limite)
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
			for( i=0 ; i<limite - 1 ; i++)
			{
				contador++;
				if(pArray[i] < pArray[i+1])
				{
					flagSwap = 1;
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
				}
			}
			limite--;
		}while(flagSwap);
		retorno = contador;
	}
	return retorno;
}
/*
int buscarMaximo(int* pArrayN,int* pMaximo, int limite)
{

}
*/
int imprimirArray(int* pArrayN, int limite)
{
	int retorno = -1;
	int i;
	if(pArrayN != NULL && limite >= 0)
	{
		retorno = 0;
			for(i=0;i<limite;i++)
			{
				printf("\n[DEBUG]  Indice: %d - Valor: %d",i,pArrayN[i]);
			}
		}
		return retorno;
}

int buscarMaximo(int* pArrayN,int* pMaximo, int limite)
{
	int i;
	int retorno= -1;

	for(i=0; i<limite ; i++)
	{
		if(i==0){
			*pMaximo = pArrayN[i];
		}
		if(pArrayN[i]>*pMaximo){
			*pMaximo = pArrayN[i];
		}
	retorno = 0;
	}

	return retorno;
}
