#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int numberToTest = *argv[1];
    int result = numberToTest % 2;
    bool hasModule = (result > 0);

    if(hasModule){
        printf("Your number is an odd!\n");
    }else{
        printf("Your number is an even!\n");
    }

    return 0;
}