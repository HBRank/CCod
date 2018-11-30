/*Ejercicio 3.6
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double precioB,total;
int main(){
	printf("\nPrecio base: ");
	scanf("%lf",&precioB);
	if (precioB>0){
		if (precioB<100){
		total=precioB-((precioB/100)*10);
		}else{
		if (precioB<200){
		total=precioB-((precioB/100)*12);
		}else{
		if (precioB>=200){
		total=precioB-((precioB/100)*15);
		}}}
	printf("\nPrecio total: %.3lf \n",total);
	}else
	{
		printf("\n\nDatos Erroneos\n\n");}
return 0;
}
