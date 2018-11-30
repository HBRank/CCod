/*Ejercicio 2.9 
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int tiempo,costoPM,total;
int main(){
	costoPM=2;
printf ("\n\nTiempo de llamada en minutos: ");
scanf("%i",&tiempo);
if (tiempo>0){
total=tiempo*costoPM;
printf("\n\nEl costo de la llamada es : %i \n\n",total);

}else{

printf("\n\nDatos erroneos\n\n");
}
return 0;
}
