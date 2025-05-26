#include<stdio.h>
void cuadrado_(float *x_ptr, float *x2_ptr);

int main((){

    int i;
    float x[4], x2[4];
    
    printf("Los valores iniciales de los arreglos x y x2 son");
    for (i=0;i<4;i++){
    scanf("%f", &x[i]);
    }
    cuadrado_(X,x2);
    for(i=0;i<4;i++){
    printf("Elcuadrado de %f es %f\n"
