#include <stdio.h>

int main() {
    char noms[5][50] = {
        "Dupont",
        "Martin",
        "Durand",
        "Bernard",
        "Thomas"
    };
    char prenoms[5][50] = {
        "Jean",
        "Marie",
        "Paul",
        "Sophie",
        "Luc"
    };
    char adresses[5][100] = {
        "123 Rue de la Paix, Paris",
        "456 Avenue des Champs-Élysées, Paris",
        "789 Boulevard Saint-Germain, Paris",
        "101 Rue de Rivoli, Paris",
        "202 Avenue de l'Opéra, Paris"
    };
    float notesProgrammation[5] = {15.5, 18.0, 16.5, 17.0, 14.5};
    float notesSysteme[5] = {14.0, 17.5, 15.0, 16.0, 18.5};

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d:\n", i + 1);
        printf("Nom: %s\n", noms[i]);
        printf("Prénom: %s\n", prenoms[i]);
        printf("Adresse: %s\n", adresses[i]);
        printf("Note en Programmation en C: %.2f\n", notesProgrammation[i]);
        printf("Note en Système d'exploitation: %.2f\n", notesSysteme[i]);
        printf("\n");
    }
}
