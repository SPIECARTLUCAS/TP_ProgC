#include <stdio.h>

int main() {
    printf("Taille de 'char' : %zu octets\n", sizeof(char));
    printf("Taille de 'signed char' : %zu octets\n", sizeof(signed char));
    printf("Taille de 'unsigned char' : %zu octets\n", sizeof(unsigned char));

    printf("Taille de 'short' : %zu octets\n", sizeof(short));
    printf("Taille de 'unsigned short' : %zu octets\n", sizeof(unsigned short));
    printf("Taille de 'signed short' : %zu octets\n", sizeof(signed short));

    printf("Taille de 'signed int' %zu octecs"), sizeof(signed long int));
    printf("Taille de 'unsigned int' %zu octecs"), sizeof(unsigned long int));
    printf("Taille de 'int' : %zu octecs"), sizeof(long int ));
}
