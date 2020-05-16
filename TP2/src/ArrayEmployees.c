/*
 * ArrayEmployees.c
 *
 *  Created on: 9 may. 2020
 *      Author: Usuario
 */
#include "ArrayEmployees.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int initEmployees(Employee listEmployee[], int l)
{
	int i;

	for(i=0; i<l; i++)
		{
		    	listEmployee[i].isEmpty=VACANT;
		}

	return 0;
}

int findEmpty(Employee listEmployee[], int l)
{
    int i;
    int index = -1;

        for( i=0; i<l ; i++)
        {
            if(listEmployee[i].isEmpty != TAKEN)
            {
                index = i;
                break;
            }
        }
    return index;
}

void addListEmployee(Employee listEmployee[], int l, int id)
{

    int index;

    index = findEmpty(listEmployee, l);


        if(index!=-1)
        {
            //hay lugar
            listEmployee[index] = addEmployee(id);
        }
        else
        {
            printf("No hay espacio disponible\n");
        }
}

int removeEmployee(Employee listEmployee[], int l)
{
    int i;
    int id;
    char option;

    int answer = -1;
    if(listEmployee != NULL && l <= 0)
    {
		printList(listEmployee, l);

		printf("\nIngrese el ID: ");
		scanf("%d", &id);

			for(i=0; i<l ; i++)
			{
			  if(listEmployee[i].id == id && listEmployee[i].isEmpty == TAKEN)
			  {
				  printEmployee(listEmployee[i]);
				  printf("Esta seguro que quiere dar de baja este empleado?: s/n");
				  fflush(stdin);
				  option = getchar();
					if(option == 's')
					{
						listEmployee[i].isEmpty = VACANT;
						answer = 1;
					}
					else
					{
						answer = 0;
					}
			  }
			}
    }
    return answer;
}


int modifyEmployee(Employee listEmployee[], int l, int id)
{
	int respuesta= -1;
	int option;
	//int name;

	printList(listEmployee,l);
	printf("\nIngrese el ID: ");
	fflush(stdin);
	scanf("%d", &id);
	menuModify();
	scanf("%d", &option);
	switch (option)
		{
			case 1:
				//modifico el nombre
				if(modifyName(listEmployee,l,id))
				{
					printf("Dato modificado exitosamente");
					respuesta = 0;
				}
				break;
			case 2:
				//modifico el apellido
				if(modifyLastName(listEmployee,l,id))
				{
					printf("Dato modificado exitosamente");
					respuesta = 0;
				}

				respuesta = 0;
				break;
			case 3:
				//modifico salario
				if(modifySalary(listEmployee,l,id))
				{
					printf("Dato modificado exitosamente");
					respuesta = 0;
				}
				break;
			case 4:
				//modifico sector
				if(modifySector(listEmployee,l,id))
				{
					printf("Dato modificado exitosamente");
					respuesta = 0;
				}

				break;
			case 5:
				{
					printf("\n///////////////////////////////////\n");
					printf("Saliendo al menu anterior . . .");
					printf("\n///////////////////////////////////\n\n");
				}
				//salgo al menu anterior
				respuesta = 0;
				break;
		}
	return respuesta;
}

void menuModify()
{
	printf("\n////////////////////////////");
	printf("\n�Qu� desea modificar?");
	printf("\n1_ Nombre");
	printf("\n2_ Apellido");
	printf("\n3_ Salario");
	printf("\n4_ Sector");
	printf("\n5_ Salir al men� anterior");
	printf("\n////////////////////////////\n");

}


Employee addEmployee(int id)
{
    Employee myEmployee;

    myEmployee.id = id;
    printf("Ingrese Nombre: ");
    fflush(stdin);
    scanf("%[^\n]", myEmployee.name);
    printf("Ingrese Apellido: ");
    fflush(stdin);
    scanf("%[^\n]", myEmployee.lastName);
    printf("Ingrese salario: ");
    scanf("%f", &myEmployee.salary);
    printf("En que sector trabaja?: ");
    scanf("%d", &myEmployee.sector);


    myEmployee.isEmpty = TAKEN;

    return myEmployee;
}

void printList(Employee listEmployee[], int l)
{
    int i;
    for( i=0; i<l ; i++)
    {
        if(listEmployee[i].isEmpty == TAKEN)
        {
            printEmployee(listEmployee[i]);
        }
    }
}

void printEmployee(Employee myEmployee)
{
    printf("%4d %25s %25s %8.2f %4d\n", myEmployee.id, myEmployee.name, myEmployee.lastName, myEmployee.salary, myEmployee.sector);
}

int modifyName(Employee listEmployee[], int l, int id)
{
	int i;
	char bufferName[21];
	int answer = -1;


		for(i=0; i<l ; i++)
		{
			  if(listEmployee[i].id == id && listEmployee[i].isEmpty == TAKEN)
			  {
				  printf("\nIngrese el nuevo nombre: ");
				  fflush(stdin);
				  scanf("%s", bufferName);
				  strcpy(listEmployee[i].name,bufferName);
				  answer = 1;
			 }
		}


	return answer;
}
int modifyLastName(Employee listEmployee[],int l,int id)
{
	int i;
	char bufferName[21];
	int answer = -1;

	for(i=0; i<l ; i++)
	{
	  if(listEmployee[i].id == id && listEmployee[i].isEmpty == TAKEN)
	  {
		  printf("\nIngrese el nuevo apellido: ");
		  fflush(stdin);
		  scanf("%s", bufferName);
		  strcpy(listEmployee[i].lastName,bufferName);
		  answer = 1;
	  }
	}
		return answer;
}
int modifySalary(Employee listEmployee[],int l,int id)
{
	int answer=-1;
	int i;
	int bufferSalary;

	for(i=0; i<l ; i++)
		{
		  if(listEmployee[i].id == id && listEmployee[i].isEmpty == TAKEN)
		  {
			  printf("\nIngrese el nuevo salario: ");
			  fflush(stdin);
			  scanf("%d", &bufferSalary);
			  listEmployee[i].salary = bufferSalary;
			  answer = 1;
		  }
		}

	return answer;

}
int modifySector(Employee listEmployee[],int l,int id)
{
	int answer=-1;
	int i;
	int bufferSector;

	for(i=0; i<l ; i++)
	{
		if(listEmployee[i].id == id && listEmployee[i].isEmpty == TAKEN)
		{
			printf("\nIngrese el nuevo salario: ");
			fflush(stdin);
			scanf("%d", &bufferSector);
			listEmployee[i].salary = bufferSector;
			answer = 1;
		}
	}
	return answer;
}

// TERMINAR EL ORDENAMIENTO POR FAVOR SINO REPRUEBO :C

int	sortEmployees(Employee listEmployee[],int l)
{
	int answer = -1;
	int option;
	int flagSwap = 0;
	int i;
	Employee auxEmployee;
	menuSort();
	//utn_getNumero;
	scanf("%d", &option);
	if(option==2)
	{
		do
		{
			flagSwap = 0;
			for(i=0 ; i<l ; i++)
			{
				if(strcmp(listEmployee[i].lastName,listEmployee[i+1].lastName)<0) // Criterio para que me acomode de manera ascendente.
				{
					flagSwap = 1;
					auxEmployee = listEmployee[i];
					listEmployee[i] = listEmployee[i+1];
					listEmployee[i+1] = auxEmployee;
				}
			}

			for(i=0 ; i<l ; i++)
			{
				if(strcmp(listEmployee[i].lastName,listEmployee[i+1].lastName)==0) // Si son iguales voy a ordenar de manera ascendente por sectores.
				{
					if(listEmployee[i].sector < listEmployee[i+1].sector)
					{
						flagSwap=1;
						auxEmployee = listEmployee[i];
						listEmployee[i] = listEmployee[i+1];
						listEmployee[i+1] = auxEmployee;
					}
				}
			}
		}while(flagSwap);
		answer = 0;
	}

	if(option==1)
		{
			do
			{
				flagSwap = 0;
				for(i=0 ; i<l ; i++)
				{
					if(strcmp(listEmployee[i].lastName,listEmployee[i+1].lastName)>0) // Criterio para que me acomode de manera descendente.
					{
						flagSwap = 1;
						auxEmployee = listEmployee[i];
						listEmployee[i] = listEmployee[i+1];
						listEmployee[i+1] = auxEmployee;
					}
				}

				for(i=0 ; i<l ; i++)
				{
					if(strcmp(listEmployee[i].lastName,listEmployee[i+1].lastName)==0) // Si son iguales voy a ordenar de manera descendente por sectores.
					{
						if(listEmployee[i].sector > listEmployee[i+1].sector)
						{
							flagSwap=1;
							auxEmployee = listEmployee[i];
							listEmployee[i] = listEmployee[i+1];
							listEmployee[i+1] = auxEmployee;
						}
					}
				}
			}while(flagSwap);
			answer = 0;
		}


	return answer;
}

void menuSort()
{
	printf("\n//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
	printf("\n�C�mo desea mostrar su lista de Empleados?");
	printf("\n1_ Ascendente");
	printf("\n2_ Descendente");
	printf("\n(Tenga en cuenta, que si tiene empleados con el mismo apellido se tomar� como criterio el sector donde se encuentre)");
	printf("\nIngrese su opcion: ");
}
