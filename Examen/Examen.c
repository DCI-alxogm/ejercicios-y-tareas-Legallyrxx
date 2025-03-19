
#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){//falataban los parentesis en el examen teórico
    int opcion;
    float base, altura, area, TC,TF;
    int numero, suma, digito;
    
    printf("Seleccione una opción:\n");
    printf("1:Calcular el área de un rectángulo\n");
    printf("2:Convertir grados Celsius a Fahrenheit\n");
    printf("3:Verificar si un número es múltiplo de otro\n");
    printf("4:Sumar los dígitos de un número de dos cifras\n");
    scanf("%d", &opcion);
    
    switch(opcion){
          case 1:
                  printf("Ingrese la base y la altura del rectángulo\n");
                  scanf("%f %f", &base, &altura);
                  area=base*altura;
                  printf("El área del rectángulo es: %f\n", area);
                  break;
          case 2:
                  printf("Ingrese la temperatura en grados Celsius\n");
                  scanf("%f", &TC);
                  TF=(TC*9/5)+32;
                  printf("La temeratura en Fahrenheit es: %.2f\n", TF);
                  break;
          case 3:
                  printf("Ingrese dos números\n");
                  scanf("%d %d", &numero, &digito);
                  if(numero%digito==0){
                            printf("%d es múltiplo de %d\n", numero, digito);
                  }else{
                            printf("%d es no es múltiplo de %d\n", numero, digito);
                  }
                  break;
          case 4:
                  printf("Ingrese un número de dos cifras\n");
                  scanf("%d", &numero);
                  if(numero>=10&&numero<=99){
                            suma=(numero/10)+(numero%10);
                            printf("La suma de los dígitos es: %d\n", suma);
                  }else if(numero<10){
                            printf("El número es de una sola cifra, no se puede realizar la operación");
                  }
                  break;
         default: 
                  printf("Opción inválida\n");
                  }
                  return(0);
                  }  
                
          
                 
    
