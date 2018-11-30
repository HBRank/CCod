/* Ejercicio 3.4
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int horas,total;
int main(){
	printf("\n\nEscribe las horas de estacionamiento: ");
	scanf("%i",&horas);
	if (horas>0){
	if (horas<=2){
	total=horas*5;
	}else{
	if (horas<=5){
	total=horas*4;
	}else{
	if (horas<=10){
	total=horas*3;
	}else{
	if (horas>10){
	total=horas*2;
	}}}}
	printf("El total es: %i",total);
	}else{
		printf("\n\nDatos erroneos\n\n");

	}
return 0;
}
