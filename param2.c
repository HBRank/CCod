#include<stdio.h>
#include<string.h>

int contarV(char contarC[100])
{
int z=0;
int c=0;
int other=0;
 while (z<100)
 {
	 switch (contarC[z])
	 {
		 case 'a':c++; break;
		 case 'e':c++; break;
		 case 'i':c++; break;
		 case 'o':c++; break;
		 case 'u':c++; break;
		 case 'A':c++; break;
		 case 'E':c++; break;
		 case 'I':c++; break;
		 case 'O':c++; break;
		 case 'U':c++; break;
			  
	 default:
	 if (contarC[z]=="")
	 {
		 other++;
	 }}
	 z++;

}
printf("espacios: %i",other);
return c;
}
int contarC(int TA,char strg[100])
{
	int tCo=0;
	int caract=0;
	caract=strlen(strg);
	tCo=caract-TA;
	return tCo;
}	
int imprimirR(char nombre[100])
{
	int vocales=0;
	int consonantes=0;
	vocales=contarV(nombre);
	consonantes=contarC(vocales,nombre);
	printf("\n\nconsonantes: %i",consonantes);
	printf("\n\nvocales: %i",vocales);
	printf("\n\nEl nombre es: %s\n\n",nombre);
}
int main()
{
	char cadena1[100];
	printf("Nombre:");
	scanf("%s",cadena1);
imprimirR(cadena1);
return 0;
}

