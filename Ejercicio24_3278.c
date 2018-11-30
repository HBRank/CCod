/*Ejercicio 3.14
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double calificacion;
int main(){
	printf("\n\nEscribe la calificacion :");
	scanf("%lf",&calificacion);
	if (calificacion>0 && calificacion<=10){
		if( calificacion==10){
			printf("\nA\n");
		}else{
		if( calificacion>=9 && calificacion<10){
			printf("\nB\n");
		}else{
		if( calificacion<9 && calificacion>=8){
			printf("\nC\n");
		}else{
		if( calificacion<8 && calificacion>=6){
			printf("\nD\n");
		}else{
		if( calificacion<6){
			printf("\nF\n");
			}}}}}}
	else{
		printf("\n\nDatos erroneos\n\n");
	}
return 0;
}

