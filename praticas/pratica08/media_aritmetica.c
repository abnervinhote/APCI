#include <stdio.h>

int main() {
    int matriz[3][3];

    printf("=== Preenchendo a Matriz 3x3 ===\n");
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("Digite o valor para a posicao [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("\n=== Elementos da Diagonal Principal ===\n");
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
        
            if (linha == coluna) {
                printf("%d ", matriz[linha][coluna]);
            } else {
                printf("  "); 
            }
        }
        printf("\n"); // 
    }

    return 0;
}
