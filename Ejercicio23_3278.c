/*Ejercicio 3.13
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int alumnos,total;
int main(){
	printf("\n\nEscribe la cantidad de alumnos :");
	scanf("%i",&alumnos);
	if (alumnos>0){
	if (alumnos<20){
	total=alumnos*70;}
	else{
	if (alumnos<=49){
	total=alumnos*40;
	}else
	{
	if (alumnos<=100){
	total=alumnos*35;
	}else{
	if (alumnos>100){
	total=alumnos*20;
	}}}}}else{
	printf("Datos erroneos");
	}
printf("\n\nEl total es: %i \n\n",total);
	return 0;
}
