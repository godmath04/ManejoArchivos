#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *archivo; // Variable tipo puntero

    archivo = fopen("Reporte.txt", "w"); // Escribir en el archivo
    char unCaracter;

    fputs("Esta es una prueba de escritura a un archivo", archivo);

    fclose(archivo);

    return 0;
}
