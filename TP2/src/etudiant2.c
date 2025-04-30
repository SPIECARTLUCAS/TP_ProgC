#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float noteProgrammation;
    float noteSysteme;
};

int main() {
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].noteProgrammation = 16.5;
    etudiants[0].noteSysteme = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].noteProgrammation = 14.0;
    etudiants[1].noteSysteme = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Paul");
    strcpy(etudiants[2].adresse, "24, Boulevard Niels Bohr, Lyon");
    etudiants[2].noteProgrammation = 15.5;
    etudiants[2].noteSysteme = 13.5;

    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Sophie");
    strcpy(etudiants[3].adresse, "26, Boulevard Niels Bohr, Lyon");
    etudiants[3].noteProgrammation = 17.0;
    etudiants[3].noteSysteme = 15.0;

    strcpy(etudiants[4].nom, "Thomas");
    strcpy(etudiants[4].prenom, "Luc");
    strcpy(etudiants[4].adresse, "28, Boulevard Niels Bohr, Lyon");
    etudiants[4].noteProgrammation = 14.5;
    etudiants[4].noteSysteme = 16.5;

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note en Programmation en C : %.2f\n", etudiants[i].noteProgrammation);
        printf("Note en Système d'exploitation : %.2f\n", etudiants[i].noteSysteme);
        printf("\n");
    }
}
