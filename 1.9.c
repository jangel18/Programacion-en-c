#include <stdio.h>

int main() {
    int c;
    int espacio_previo = 0; // Flag para rastrear espacios consecutivos

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!espacio_previo) {
                putchar(c);
                espacio_previo = 1;
            }
        } else {
            putchar(c);
            espacio_previo = 0;
        }
    }
    
    return 0;
}