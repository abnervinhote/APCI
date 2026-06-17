#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das strings com limite de caracteres
    char primeiro_nome[50];
    char ultimo_nome[50];
    char nome_completo[100];

    // Leitura do primeiro nome
    printf("Digite o primeiro nome: ");
    scanf("%49s", primeiro_nome);

    // Leitura do último nome
    printf("Digite o ultimo nome: ");
    scanf("%49s", ultimo_nome);

    // Manipulação usando <string.h>
    // 1. Copia o primeiro nome para a variável 'nome_completo'
    strcpy(nome_completo, primeiro_nome);
    
    // 2. Concatena (adiciona) um espaço em branco
    strcat(nome_completo, " ");
    
    // 3. Concatena o último nome ao final da string
    strcat(nome_completo, ultimo_nome);

    // Exibe o resultado final na tela
    printf("Nome concatenado: %s\n", nome_completo);

    return 0;
}