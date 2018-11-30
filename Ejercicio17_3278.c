/*Ejercicio 3.7
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double promedio;
int edad;
int main(){
	printf("\nEscribe la edad :");
	scanf("%i",&edad);
	printf("\nEscribe el promedio : ");
	scanf("%lf",&promedio);
	if (promedio>0 && edad>0){
		if (edad>18){
			if (promedio>=9){
		printf("\n\nLa beca es de $2000.00");
		}else{
		if (promedio<9 && promedio>=7.5){
		printf("\n\nLa beca es de $1000.00");
		}else{
		if (promedio<7.5 && promedio>=6){
		printf("\n\nLa beca es de $500.00");
		}else{
			if (promedio<6){
			printf("\n\nEnviar carta de invitación para estudiar mas");
			}}}}
	}else{
	if (edad<=18){
	if (promedio>=9){
	printf("\n\nLa beca es de $3000.00");
	}else{
		if (promedio>=8){
		printf("\n\nLa beca es de $2000.00");}
		else{
			if (promedio>=6)
			{
				printf("\n\nLa beca es de $100.00");
			}else
				{
					if (promedio<6){
	printf("\n\nEnviar carta de invitación");
	}}}}}}}
	else
	{
	printf("\n\nDatos Erroneos\n\n");}
return 0;
}
