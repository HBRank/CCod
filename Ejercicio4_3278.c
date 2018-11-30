/*Ejercicio 2.4
 * Autor:Hugo Braian Bonilla R*/
#include<stdio.h>
int horasE,precioPorHora,total;
int main()
	{
		printf("\nItroduce las horas :");
		scanf("%i",&horasE);
		printf("\nintroduce el precio por hora:");
		scanf("%d",&precioPorHora);
		if (horasE>0 && precioPorHora)
		{
			total=horasE*precioPorHora;
			printf("El total a pagar es: %d \n\n",total);
		}
		return 0;
	}
