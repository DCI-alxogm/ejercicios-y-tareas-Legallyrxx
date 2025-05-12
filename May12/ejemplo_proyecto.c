#include <stdio.h>
int main(){
           char fname[100]; //como se llama el archivo y cambia con cada interacción
           FILE *fp; // variable con la que se manipula el archivo
           int i, j=0;
           int num_max=100;
           for(i=0;i<num_max;i++){
           //Creación del nombre del archivo y escribir en el
           sprintf(fname,"salida_t%d%d.txt",j,i); //como pirintf pero guarda el string de la variable en lugar de imprimirlo...
           printf("%s\n",fname);
           fp=fopen(fname,"w");//se abre el archivo para escritura
           fprintf(fp,"//abrí y cerre archivo");//se cierra el archivo de escitura
           fclose(fp);
           }
           return(0);
           }
