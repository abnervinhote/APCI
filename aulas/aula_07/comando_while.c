#include <stdio.h>

int main () {

    int numero;

    printf ("Entre com um numero de 1 a 10: ");
    scanf ("%i", &numero);
    while(getchar ()!= '\n');

    while (numero < 1 || numero > 10) {
        printf ("numero invalido, tente de novo.\n");
        scanf ("%i", &numero);
            while(getchar ()!= '\n');

    }


    return 0;
}