/*Ejercicio 2.10
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double metrosC,precioPM,total;
int main(){
	printf("\n\nEscribe la cantidad de metros cubicos: ");
	scanf("%lf",&metrosC);
	printf("\n\nEscribe el precio total por metro cubico: ");
	scanf("%lf",&precioPM);
if (metrosC>0 && precioPM>0)
{
total=metrosC*precioPM;
printf("\n\nEl pago a realizar es: %lf\n\n",total);
}else{
printf("\n\nDatos erroneos\n\n");
}
return 0;
} 
