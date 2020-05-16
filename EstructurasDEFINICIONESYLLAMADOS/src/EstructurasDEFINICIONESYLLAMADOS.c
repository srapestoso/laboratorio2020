/*
 ============================================================================
 Name        : EstructurasDEFINICIONESYLLAMADOS.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Estructuras - Definicion y Declaracion
*/
#include <stdio.h>
#include <stdlib.h>
//Definición de Estructura

typedef struct {
//struct datosPersonales{
    char nombre[20];
    char apellido[20];
    char calle[20];
    int numero;
//};
}datosPersonales;


int main()
{   //Declaracion de variable agenda de tipo datosPersonales
    datosPersonales agenda;
    int vnum;
    int i;
    char sexo;
    //struct datosPersoanles agenda;

    return 0;
}
