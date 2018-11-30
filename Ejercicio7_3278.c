/*Ejercicio 2.7
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double KilometrosPR,precioPK,total;
int main(){
	printf("\n\nKilometros por recorrer: ");
	scanf("%lf",&KilometrosPR);
	printf("\n\nPrecio por kilometro: ");
	scanf("%lf",&precioPK);
	if(precioPK>0 && KilometrosPR>0)
	{
	total=precioPK*KilometrosPR;
	printf("\n\nEl cobro sera de : $%lf \n\n",total);
	}else{
	printf("Datos erroneos");}
return 0;
}
