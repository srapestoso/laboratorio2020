/*******************************************************************
*Programa:  Trabajo Practico nº1
*
*Objetivo:  Realizar una calculadora
*
*
*
*Autor: Nicolas Lorenzo Rolon
*
********************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"

int main()
{
	setbuf(stdout,NULL);
    int option;
    float A,B;
    float suma;
    float resta;
    float divi;
    float multiplicar;
    do
    {
        printf("1. Ingresar 1er operando (A) = \n");
        printf("2. Ingresar 2do operando (B) = \n");
        printf("3. Calcular todas las operaciones:\n");
        printf("	Suma, resta, division, multiplicacion y factorial de los operando\n");
        printf("4. Informar resultados\n");
        printf("5. SALIR\n");
        fflush(stdin);

        utn_getNumero(&option,"Elija una opcion\n","Dato invalido reingrese\n",1,5,3);
        switch(option)
        {
            case 1:
                printf("\n    Ingrese el 1er valor: ");
                scanf("%f",&A);
                break;
            case 2:
                printf("\n    Ingrese el 2do valor: ");
                scanf("%f",&B);
                break;
            case 3:
                printf("\n\n    Operaciones realizadas con exito!\n\n");
                suma = Sumar(A,B);
                resta = Resta(A,B);
                divi = Divi(A,B);
                multiplicar = Multi(A,B);
                break;
            case 4:
                printf("Los resultados son los siguientes: \n");
                printf("\nEl resultado de A + B es = %.2f", suma);
                printf("\nEl resultado de A - B es = %.2f", resta);
                    if(B==0)
                    {
                        printf("\nNo es posible dividir por cero");
                    }
                    else
                    {
                        printf("\nEl resultado de A / B es = %.2f", divi);
                    }
                printf("\nEl resultado de A*B es = %.2f", multiplicar);
                Fact(A,B); // Utilice el llamado a la funcion directamente y use los printf dentro del mismo de lo contrario debía realizar 2 funciones distintas para cada numero
                break;
            case 5:
                break;
            default:
                printf("Opcion incorrecta!!!\n");

        }
    system("pause");
    system("cls");
    }
    while(option!=5);

    return 0;
}
