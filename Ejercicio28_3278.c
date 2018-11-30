/* Ejercicio 4.3
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int main{
	int c=0,z,MayZ,MenZ;
printf("cantidad de numeros a evaluar");
scanf("%i",c);
int i[c];

for (int cont=0;cont<=c;cont++	){
	printf("Numero:");
	scanf("%i",i[cont]);
	if (i[cont]==0){
	z++;
	
	}else if (i[cont]<0){
	MenZ++;
	}else if(i[cont]>0){
	MayZ++;
	}


}
printf("Ceros:",z);
printf("Mayores a cero:",MayZ);
printd("Menores A cero: ",MenZ);


	return 0;
}
