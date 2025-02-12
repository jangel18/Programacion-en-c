#include <stdio.h>

int main() {
    int c;
    int espacio_previo = 0; // Flag para rastrear espacios consecutivos

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\'); putchar('t'); 
            
        }else if (c == '\b' || c == 127) {
            putchar('\\'); putchar('b'); 
        }
        else if (c == '\\') {
            putchar('\\'); putchar('\\'); 
           
            
        } 
     
        
        
        else {
            putchar(c);
           
        }
    }
    
    return 0;
}