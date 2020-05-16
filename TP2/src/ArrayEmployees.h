/*
 * cliente.h
 *
 *  Created on: 6 may. 2020
 *      Author: Usuario
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_
#define VACANT 0
#define TAKEN 1


typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}Employee;

int initEmployees(Employee[],int);
int findEmpty(Employee[], int);
void addListEmployee(Employee[], int, int);
Employee addEmployee(int);
int removeEmployee(Employee[], int);
int modifyEmployee(Employee[], int, int);
int modifyName(Employee[],int,int);
int modifyLastName(Employee[],int,int);
int modifySalary(Employee[],int,int);
int modifySector(Employee[],int,int);
int	sortEmployees(Employee[],int);
void menuSort();
void printEmployee(Employee);
void printList(Employee[], int);
void menuModify();

#endif /* ARRAYEMPLOYEES_H_ */
