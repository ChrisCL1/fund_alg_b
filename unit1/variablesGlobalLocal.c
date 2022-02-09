#include <stdio.h>
#include <stdlib.h>

//*Global varibles*//
char* date = "02-02-22T10:25:00z";
////////////////////////////////

/// La ejecucion del programa ///
int main(){
    date = "03-02-22T10:25:00z";
    int hours = 22; //Local:main %d-%i
    float pi = 2.1416; //%f
    char character = 'c'; //%c
    char* name = "Christopher"; //%s
    int *address = &hours; //%p
    hours = hours + 2;
    printf("valor: %c ", character);
    return 0;
}
/////////////////////////////////