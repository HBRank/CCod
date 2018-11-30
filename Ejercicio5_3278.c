/*Ejercicio 2.5 
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double precioPorMetro,metrosC,total;
 int main()

{
	printf("Introdusca el precio por metro cuadrado: ");
	scanf("%lf",&precioPorMetro);
	printf("Introdusca los metros cuadrados: ");
	scanf("%lf",&metrosC);
	if (metrosC>0 && precioPorMetro>0){
	total=metrosC*precioPorMetro;
	printf("El precio es: %.2lf$",total);
	}
return 0;
}
