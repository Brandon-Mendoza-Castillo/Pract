//repocitorio en lenguaje c++ - automata_palabras_correctas
#include <stdio.h>
#include <ctype.h>

int car;

// Función para devolver un carácter a la secuencia de entrada
void ungetchar(int c) {
    ungetc(c, stdin); // Devuelve el carácter a la secuencia de entrada
}

// Función para comprobar el final de la palabra
void comprueba_fin() {
    if (car == '\n') {
        puts("palabra correcta");
    } else {
        puts("palabra incorrecta");
    }
}

int main() {
    printf("Introduce una palabra: "); // Solicita datos al usuario

    // Ignora espacios en blanco iniciales
    while (isspace(car = getchar()));
    ungetchar(car); // Devuelve el carácter leído

    // Si es una letra, empieza a leer la palabra
    if (isalpha(car = getchar())) { 
        // Recorre cada carácter y verifica que sean letras
        for (car = getchar(); isalpha(car); car = getchar());
        comprueba_fin(); // Verifica si la palabra es válida
    } else {
        // Si no comienza con una letra, la palabra es incorrecta
        puts("palabra incorrecta");
    }

    return 0;
}
