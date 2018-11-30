/*Ejercicio 3.10
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double precioPK,dinero,km;
int main(){
	printf("\n\nEscribe el precio por kilometro recorrido: ");
	scanf("%lf",&precioPK);
	printf("\n\nCon cuanto dinero se cuenta: ");
	scanf("%lf",&dinero);
	km=dinero/precioPK;
	if (km>=750){
		printf("\n-Mexico\n");
		if (km>=800){
			printf("\n-Puerto vallarta\n");
			if (km>=1200){
				printf("\n-Acapulco\n");
				if (km>=1800){
					printf("\n-Cancun\n");
				}
			}
		}
	}else{
		printf("\n\nQuedate en casa\n\n");
	}
return 0;
}
