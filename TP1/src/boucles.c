#include <stdio.h>

int main() {
    int compteur = 5; // Vous pouvez changer cette valeur pour tester différentes tailles

    for (int i = 1; i <= compteur; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            if (j == 1 || j == i || i == compteur) 
            {
                printf("* ");
            } 
            else 
            {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}
