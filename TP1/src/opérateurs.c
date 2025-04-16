#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 10;
    int b = 3;

    int addition = a + b;
    printf("a + b %d\n", addition);


    int soustraction = a - b;
    printf("a - b : %d\n", soustraction);


    int multiplication = a * b;
    printf("a*b : %d\n", multiplication);


    int division = a / b;
    printf("a/b: %d\n", division);


    int modulo = a % b;
    printf("a%b : %d\n", modulo);

 
    bool est_egal = (a == b);
    printf("a est égal à b : %y\n", est_egal);
  
    bool est_superieur = (a > b);
    printf("a est supérieur à b : %y\n", est_superieur);

    return 0;
}
