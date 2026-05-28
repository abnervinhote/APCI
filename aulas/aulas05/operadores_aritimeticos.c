#include <stdio.h>

int main() {

    // 1. Entrada
    int operador1;
    int operador2;

    printf("Entre com um valor inteiro: ");
    scanf("%i", &operador1);
    while (getchar() != '\n'); // Limpa o buffer

    printf("Entre com um outro valor inteiro: ");
    scanf("%i", &operador2);
    while (getchar() != '\n'); // Limpa o buffer

    // 2. Processamento 
    int soma = operador1 + operador2;
    int multiplicacao = operador1 * operador2;
    int subtracao = operador1 - operador2;
    float divisao = operador1 * 1.0f / operador2; 
    int resto = operador1 % operador2; 


    
    // 3. Saída
    printf(" %i + %i = %i\n", operador1, operador2, soma);
    printf(" %i * %i = %i\n", operador1, operador2, multiplicacao);
    printf(" %i - %i = %i\n", operador1, operador2, subtracao);
    printf(" %i / %i = %.2f\n", operador1, operador2, divisao);
    
    printf(" %i %% %i = %i\n", operador1, operador2, resto);

    return 0;
}