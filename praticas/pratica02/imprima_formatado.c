#include <stdio.h>

int main() {
    printf("==============================\n");
    printf("      N O T A    L E G A L\n");
    printf("==============================\n");
    printf("Produto         Qtd Valor Unit\n");
    printf("%-16s%03d%11.2f\n", "Camiseta", 2, 39.99);
    printf("%-16s%03d%11.2f\n", "Calca", 1, 89.90);
    printf("%-16s%03d%11.2f\n", "Meia Social", 3, 19.99);
    printf("==============================\n");
    printf("%-16s%14.2f\n", "Total", 229.85);
    return 0;
} //gcc imprima_formatado.c -o a.out