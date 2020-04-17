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
    int option;
    float A,B;
    float suma;
    float resta;
    float divi;
    float multip;
    float factAB;
    do
    {
        printf("1. Ingresar 1er operando (A) = \n");
        printf("2. Ingresar 2do opreando (B) = \n");
        printf("3. Calcular todas las operaciones:\n");
        printf("    a) Calcular la suma\n");
        printf("    b) Calcular la resta\n");
        printf("    c) Calcular la division\n");
        printf("    d) Calcular la multiplicacion\n");
        printf("    e) Calcular el factorial\n");
        printf("4. Informar resultados\n");
        printf("    a)El resultado de A+B es: \n");
        printf("    b)El resultado de A-B es: \n");
        printf("    c)El resultado de A/B es: \n");
        printf("    d)El resultado de A*B es: \n");
        printf("    e)El factorial de A es :  y el factorial de B es : \n");
        printf("5. SALIR\n");
        printf("Elija una opcion: ");
        fflush(stdin);
        scanf("%d", &option);

        switch(option)
        {
            case '1':
                printf("\n    Ingrese el 1er valor: ");
                scanf("%f",&A);
                break;
            case '2':
                printf("\n    Ingrese el 2do valor: ");
                scanf("%f",&B);
                break;
            case '3':
                printf("\n\n    Operaciones realizadas con exito!\n\n");
                suma = Sumar(A,B);
                resta = Resta(A,B);
                divi = Divi(A,B);
                multip = Multi(A,B);

                break;
            case '4':
                printf("Los resultados son los siguientes: \n");
                printf("\nEl resultado de A + B es = %f", suma);
                printf("\nEl resultado de A - B es = %f", resta);
                    if(B==0)
                    {
                        printf("\nNo es posible dividir por cero");
                    }
                    else
                    {
                        printf("\nEl resultado de A / B es = %f", divi);
                    }
                 factAB = Fact(A,B); // Utilice el llamado a la funcion directamente y use los printf dentro del mismo de lo contrario debía realizar 2 funciones distintas para cada numero





                break;
            case '5':
                break;
            default:
                printf("Opcion incorrecta!!!\n");

        }
    system("pause");
    system("cls");
    }
    while(option!='5');

    return 0;
}
