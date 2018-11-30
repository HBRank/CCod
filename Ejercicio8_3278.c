/* Ejercicio 2.7
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double distanciaM,vel,tiempo;
int main(){
	printf("\n\nEscribe distancia en metros: ");
	scanf("%lf",&distanciaM);
	printf("\n\nEscribe la velocidad en metros por hora: ");
	scanf("%lf",&vel);
	if (distanciaM>0 && vel>0)
	{
	
	tiempo=distanciaM/vel;
	printf("\n\nEl tiempo de recorrido es: %.2lf horas\n\n",tiempo);
	}else
	{printf("Datos erroneos");
	}
return 0;
}
