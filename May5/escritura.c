#include <stdio.h>
 
int main() {
    FILE *archivo;
    char var[255];
 
    archivo = fopen("test.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
 
    fgets(var, 255, archivo);  // Leer una línea del archivo
    printf("Archivo leído correctamente: %s", var);
 
    fclose(archivo);
    return 0;
}
 
