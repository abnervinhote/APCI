#include <stdio.h>

int main() {
    // Declaração e inicialização das variáveis
    int idade = 25;
    char sexo = 'M';
    float altura = 1.75f;
    double peso = 72.845;

    // Impressão utilizando os especificadores de formato corretos
    printf("--- Informacoes da Pessoa ---\n");
    printf("Idade: %d anos\n", idade);       
    printf("Sexo: %c\n", sexo);              
    printf("Altura: %.2f metros\n", altura); 
    printf("Peso: %.3lf kg\n", peso);        

    return 0;
}