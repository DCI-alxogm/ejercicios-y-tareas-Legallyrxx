//Feb12 Definición de variables, imprimir

#include <stdlib.h> //librería estándar de C.
#include <stdio.h> //Librería para la interacción con la pantalla

int main( ){
    char nombre[10];
    int edad;
    float temperatura;
    //Cuerpo del programa;
    printf("¿Cuál es tu nombre?? \n");
    scanf("%s", nombre);
    printf("Hola, %s este es el segundo programa del curso PB2025\n", nombre);
    
    printf("Introduce tu edad \n");
    scanf("%i", &edad);
    printf("¿Qué temperatura marca el termómetro de tu ciudad? \n");
    scanf("%f", &temperatura);
    
    printf("Entonces te llamas %s, tienes %i años y el último registro de temperatura de tu edad fue: %f", nombre, edad, temperatura);
    exit(0);
    }
