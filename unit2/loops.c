#include <stdio.h>
#include "../libraries/utils.h"

int main(int argc, char** argv){

    for (int iterator = 1 ; iterator <= 10 ; iterator = iterator + 1) {
        printf("ITERATOR: %d\n", iterator);
        //sleep(1000);
    }
    
    int rango = 100;
    int count = 0; 
    while ( rango > 1 ) {
        count = count + rango;
        rango--;
    }
    printf("Suma: %d\n", count);

    //loops infinitos

    while (true) {
        system("clear");
        printf("Program running...\n");
        //sleep(1000);
        break;
    }

    for (;;){
        break;
    }

    bool condition;
    int i = 1;
    int cuenta = 0;
    // 1 + 2 + 3
    do{
        cuenta += i; // cuenta = cuenta + 1
        printf("dato: %d\n", cuenta);
        condition = (i < 3);
        i++;
    }while ( condition );

    return 0;
}