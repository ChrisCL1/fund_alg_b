#include <stdio.h>

int main(){
    int number;
    int i;
    int c = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++){
        if (number % i == 0){
            c++;
        }
    }
    if (c == 2){
        printf("Is a prime number\n");
    }else{
        printf("Is not a primer number\n");
    }

    return 0;
}