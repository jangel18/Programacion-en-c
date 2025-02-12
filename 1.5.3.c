#include <stdio.h>
 /*cuenta los caracteres de la entrada; la. versión */
int main( ){
    int c, ni; 
    ni = 0;
    while ((c = getchar( )) != EOF) 
        if (c =='\n')
            ++ni; 
    printf("%d\n", ni);
}