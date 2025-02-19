//PROGRAMA DE CONVERSION Feb19

#include<stdio.h>
#include<stdlib.h>

int main(){
  float TC,TK;
  printf("Inserte temperatura en Celsius\n");
  scanf("%f", &TC);
  TK= TC+273.15;
  printf("%f grados Celsius en Kelvin son: %f \n", TC, TK);
  
  exit(0); 
}
