/*Ejercicio 3.9
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double total,pCuota,pc1,pc2,pc3,pc4;
int nPlan,p1,p2,p3,p4;
int planA=1200;
int planB=950;
int main(){
	printf("Planes\n1.A\n2.B\nEscribe el numero correspondiente:");
	scanf("%i",&nPlan);
	printf("Conduce alcoholizado?\n1.Si\n2.No\n");
	scanf("%i",&p1);
	printf("Conduce con lentes?\n1.Si\n2.No\n");
	scanf("%i",&p2);
	printf("Tiene alguna enfermedad?\n1.Si\n2.No\n");
	scanf("%i",&p3);
	printf("tien mas de 40 años?\n1.Si\n2.No\n");
	scanf("%i",&p4);
	switch (nPlan){
	case 1:
	if (p1==1)
	{pc1=(planA/100)*10;}

	if (p2==1)
	{pc2=(planA/100)*5;}
	
	if (p3==1)
	{pc3=(planB/100)*5;}

	if (p4==1)
	{pc4=(planA/100)*20;}
	else{if (p2==2)
		{pc4=(planA/100)*10;}
	}
	total=pc1+pc2+pc3+pc4+planA;
	break;
	case 2:
	if (p1==1)
	{pc1=(planB/100)*10;}

	if (p2==1)
	{pc2=(planB/100)*5;}
	
	if (p3==1)
	{pc3=(planB/100)*5;}

	if (p4==1)
	{pc4=(planB/100)*20;}
	else{if (p2==2)
		{pc4=(planB/100)*10;}
	}
	total=pc1+pc2+pc3+pc4+planB;
	break;
	}
	printf("\n\nEl total es : %lf \n\n",total);
	return 0;
}

