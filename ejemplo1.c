#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *archivo; //Variable tipo puntero

    archivo = fopen("Datos.txt","r"); // Abrirlo en modo lectura 
    char unCaracter;
    /**/
    while (!feof(archivo)){ // Mecanismo parar barrer el contenido hasta llegar al final del archivo
        unCaracter = fgetc(archivo);
        putchar(unCaracter);
    }

    fclose(archivo);

    return 0;
}
