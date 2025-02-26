#include <stdio.h>
 
int main() {
    int a;
    int residuo;
 
    // Solicitar valores desde la terminal
    printf("Introduce el valor que quieres saber si es par o impar: ");
    scanf("%d", &a);
    
    residuo=a%2;
    if(residuo==0){
    printf("El número %d es par.\n", a);
    } else {
        printf("El número %d es impar.\n", a);
    }
 
    return 0;
}
