#include <stdio.h>

int main () {

    int numero = 0;

    do {

        printf ("Encontre com um numero de 1 a 10: ");
        scanf ("%i", &numero);

        while (getchar() != '\n');

    } while (numero < 1 || numero > 10);

    printf ("Numero valido: %i\n", numero);

    return 0;
}
















}