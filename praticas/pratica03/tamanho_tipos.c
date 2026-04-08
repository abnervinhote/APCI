#include <stdio.h>

int main() {
    printf("--- Tamanho dos Tipos (em bytes) ---\n");
    printf("char: %lu byte(s)\n", sizeof(char));
    printf("short int: %lu byte(s)\n", sizeof(short int));
    printf("int: %lu byte(s)\n", sizeof(int));
    printf("long int: %lu byte(s)\n", sizeof(long int));
    printf("long long int: %lu byte(s)\n", sizeof(long long int));
    printf("float: %lu byte(s)\n", sizeof(float));
    printf("double: %lu byte(s)\n", sizeof(double));
    printf("long double: %lu byte(s)\n", sizeof(long double));

    return 0;
}