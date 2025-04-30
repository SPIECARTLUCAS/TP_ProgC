#include <stdio.h>

int main() {
    int a = 2; // Vous pouvez changer cette valeur
    int b = 3; // Vous pouvez changer cette valeur
    int resultat = 1;
    int i;

    for (i = 0; i < b; i++) {
        resultat *= a;
    }

    printf("Le résultat de %d élevé à la puissance %d est : %d\n", a, b, resultat);

    return 0;
}
