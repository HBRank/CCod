/*Ejercicio 5.2 
 * Autor :Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int main(){
int matriz[2][2]={2,2,2,2};
int matriz1[2][2]={10,10,10,10};
int resultado[2][2],c,f;
for (f=0;f<2;f++){
	for (c=0;c<2;c++){
resultado[f][c]=(matriz[f][c])*(matriz1[f][c]);
printf("%i",resultado[f][c]);



	}
printf("\n");
}






return 0;
}
