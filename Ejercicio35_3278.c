/*Ejercicio 5.5
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int main(){
int matriz[3][3]={1,0,0,0,1,0,0,0,1};
int f,c=1,l,lul=0,r1=0,r2=0;



for (f=0;f<3;f++){
	while(c==0){
if(matriz[f][f]!=0){
lul=lul+matriz[f][f];
}else
{
c=0;
}





}}
if (c==0){
printf("No es diagonal");
}else{
for (l=0;l<3;l++){
for (f=0;f<3;f++){
r1=r1+matriz[f][l];

}}
if (r1==lul)
{
	printf("Es diagonal");
}}

return 0;

}
