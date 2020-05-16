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
			 if (getInt(&num)==1)
			 {
				 if(num<=maximo && num>=minimo)
				 {break;}
			 }
			 fflush(stdin);
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
	if(esNumerica(buffer)==1)
	{
		*pResultado = atoi(buffer);
		ret=1;
	}
	return ret;
}

/** \brief Indica si la cadena de caracteres es numerica
**  \param Puntero a la cadena de caracteres
**  \return Retorna 0 si la cadena es numerica
**/
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

/** \brief Calcula la suma de 2 numeros flotantes
**  \param Los numeros flotantes a los cuales se utilizaran para el calulo
**  \return El resultado de la suma
**/

float Sumar(float num1, float num2)
{
    float resultado;

    resultado = num1 + num2;

    return resultado;
}

/** \brief Calcula la diferencia de 2 numeros flotantes
**  \param Los numeros flotantes a los cuales se utilizaran para el calulo
**  \return El resultado de la diferencia
**/

float Resta(float num1, float num2)
{
    float resultado1;

    resultado1 = num1 - num2;

    return resultado1;
}

/** \brief Calcula la division de 2 numeros flotantes
**  \param Los numeros flotantes a los cuales se utilizaran para el calulo
**  \return El resultado de la division
**/

float Divi(float num1, float num2)
{
    float resultado2;

    resultado2 = num1 / num2;

    return resultado2;
}

/** \brief Calcula el producto de 2 numeros flotantes
**  \param Los numeros flotantes a los cuales se utilizaran para el calulo
**  \return El resultado de el producto
**/

float Multi(float num1, float num2)
{
    int resultado3;

    resultado3 = num1 * num2;

    return resultado3;
}

/** \brief Calcula el factorial de 2 numeros flotantes
**  \param Los numeros flotantes a los cuales se utilizaran para el calulo
**  \return El resultado del factorial de ambos numeros
**/

float Fact(float num1, float num2)

{
    float i,factorialA=1, factorialB=1;

      if(num1>=0){
                for(i=1;i<=num1;i++){
                    factorialA = factorialA*i;
                }
                printf("\nEl factorial de A es :%.1f",factorialA);
            }
            else{
                printf("\nno se puede calcular el factorial de un numero negativo\n");
            }

            if(num2>=0){
                for(i=1;i<=num2;i++){
                    factorialB = factorialB*i;
                }
                printf("\nEl factorial de B es :%.1f\n",factorialB);
            }
            else{
                printf("\nEl se puede calcular el factorial de un numero negativo\n\n");
            }

    return 0;
}


