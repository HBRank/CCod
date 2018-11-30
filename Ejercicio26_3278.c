/*Ejercicio 4.1
 * Autor: Hugo Braian Bonilla Rodriguez */
#include<stdio.h>
int main()
{
float salario=1500;
for (int i=1;i<7;i++)
{
	salario=salario+(salario*(.10));
	printf("\nSalario año %i: $ %.3f\n",i,salario);
			



}
return 0;
}

