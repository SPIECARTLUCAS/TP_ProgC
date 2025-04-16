#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 10;
    int b = 3;

    int addition = a + b;
    printf("a + b = %d\n", addition);

    int soustraction = a - b;
    printf("a - b = %d\n", soustraction);

    int multiplication = a * b;
    printf("a * b = %d\n", multiplication);

    int division = a / b;
    printf("a / b = %d\n", division);

    int modulo = a % b;
    printf("a %% b = %d\n", modulo); // Utilisez %% pour afficher le caractère %

    bool est_egal = (a == b);
    printf("a est égal à b : %s\n", est_egal ? "vrai" : "faux");

    bool est_superieur = (a > b);
    printf("a est supérieur à b : %s\n", est_superieur ? "vrai" : "faux");

    return 0;
}
