#include <stdio.h>
 
int main() {
    int a;
    char respuesta;

    while(1){
    printf("Introduce el valor que quieres saber si es par o impar: ");
    scanf("%d", &a);
    
    if(a%2==0){
    printf("El número %d es par.\n", a);
    } else {
        printf("El número %d es impar.\n", a);
    }
    
    printf("¿Quieres hacer otra operación?(s/n):");
    scanf("%c", &respuesta);
    
    if(respuesta=='n'){
    break;
    }
   }
    printf("Programa finalizao.\n");
    return 0;
}
