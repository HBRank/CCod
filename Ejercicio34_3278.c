/*Ejercicio 5.4
 * Autor :Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int main(){

	int matriz[2][2]={5,8,3,7};
	int matriz1[2][2]={2,3,1,3};
	int f,c,r[2][2];
	for(f=0;f<2;f++){
		for(c=0;c<2;c++){
r[f][c]=(matriz[f][c])-(matriz1[f][c]);
printf(" %i ",r[f][c]);

		}
		printf("\n");
	}

return 0;
}
