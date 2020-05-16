/*
 ============================================================================
 Name        : TP2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define ELEMENTS 1000
#include "ArrayEmployees.h"

int main()
{
	int id = 1000;
	setbuf(stdout,NULL);
	Employee listEmployee[ELEMENTS];

	initEmployees(listEmployee,ELEMENTS);

    int option;
    int r;
    do
    {
        //Employee listEmployee[ELEMENTS];
        printf("==============================\n");
        printf("1.Dar Alta Empleado\n2.Modificar Empleado\n3.Dar Baja Empleado\n4.Informes\n5.Salir\n");
        printf("==============================\n");
        printf("Elija una opcion: ");
        scanf("%d", &option);

        switch(option)
        {
			case 1:
					addListEmployee(listEmployee, ELEMENTS,id);
					id++;
					break;
			case 2:
					modifyEmployee(listEmployee, ELEMENTS,id);
					break;
			case 3:
					r = removeEmployee(listEmployee, ELEMENTS);
					if( r!=0 )
					{
						printf("\nNo se realizo ninguna carga por favor, reintente luego de haber ingresado al menos un Empleado\n");
					}
					break;
			case 4:
					//printList(listEmployee, ELEMENTS); //	Esta linea la dejo comentada, para que puedan comprobar que acomoda la lista de empleados
					sortEmployees(listEmployee,ELEMENTS);
					printList(listEmployee, ELEMENTS);
					break;
		}
    }while(option!=5);

    printf("Saliendo del programa . . .");
    return 0;
}
