#include <stdio.h>


int calculerLongueur(char *chaine) {
    int longueur = 0;
    while (chaine[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}


void copierChaine(char *source, char *destination) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; 
}


void concatenerChaine(char *chaine1, char *chaine2, char *resultat) {
    int i = 0, j = 0;

    
    while (chaine1[i] != '\0') {
        resultat[j++] = chaine1[i++];
    }

    i = 0;
    while (chaine2[i] != '\0') {
        resultat[j++] = chaine2[i++];
    }

}

int main() {
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char copie[50];
    char resultat[100];

    int longueur1 = calculerLongueur(chaine1);
    printf("Longueur de '%s' : %d\n", chaine1, longueur1);

    copierChaine(chaine1, copie);
    printf("Copie de '%s' : %s\n", chaine1, copie);

    concatenerChaine(chaine1, chaine2, resultat);
    printf("Concaténation de '%s' et '%s' : %s\n", chaine1, chaine2, resultat);

}
