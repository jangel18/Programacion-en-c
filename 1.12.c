#include <stdio.h>
#define IN 1 
#define OUT 0 
/* en una palabra */
/* fuera de una palabra */
/* cuenta lineas, palabras, y caracteres de la entrada */ 
int main( ){
    int c;
    while((c=getchar())!=EOF){
        
        if (c == ' ' || c == '\t' || c=='\n')
            putchar('\n');
         else      
            putchar(c);
        
        
        
        

    }
}