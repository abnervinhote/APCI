#include <stdio.h>

int main() {
    // Definindo a constante PI usando #define
    #define PI 3.14159265

    // Definindo o número de Euler usando const
    const double EULER = 2.71828182;

    // Tentativa de alterar o valor da constante (Descomente a linha abaixo para ver o erro)
    // EULER = 3.0; 

    printf("--- Constantes de Matematica ---\n");
    printf("Valor de PI: %.8f\n", PI);
    printf("Valor de Euler: %.8f\n", EULER);

    return 0;
}