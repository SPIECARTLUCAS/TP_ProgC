#include <stdio.h>
#include <math.h>

int main() {
    double rayon;
    scanf("%lf", &rayon);
    printf("Entrez la valeur du rayon du cercle : ");
    

    double aire = M_PI * rayon * rayon;

    double perimetre = 2 * M_PI * rayon;

    printf("L'aire du cercle est : %lf\n", aire);
    printf("Le périmètre du cercle est : %lf\n", perimetre);

}
