#include <stdio.h>
#include <math.h>
int main() {
 double rayon;

  printf("Entrez la valeur du rayon du cercle : ");
  scanf("%lf", &rayon);

  double aire = M_PI * rayon * rayon;
  
  double perimetre = 2 * M_PI * rayon;

  printf("L'aire du cercle est : ",aire);
  printf("Le perimetre du cercle : ",perimetre);
}
