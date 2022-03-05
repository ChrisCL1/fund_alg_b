#include <stdio.h>

int main(){
    int numero;
    int i;
    int contador = 0;

    printf("Introduzca un numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++){
        if (numero % i == 0){
            contador++;
        }
    }
    if (contador == 2){
        printf("Is a prime number\n");
    }else{
        printf("Is not a primer number\n");
    }

    return 0;
}