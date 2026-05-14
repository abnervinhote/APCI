#include <stdio.h>

int main () {
    char tecla_pressionada;
    printf ("Pressione uma tecla:");
    scanf ("%c", &tecla_pressionada);
    printf ("Você pressionou a tecla ' %c'\n", tecla_pressionada);
        while(getchar() != '\n'); //limpar o buffer

    int idade; 
    printf ("Informe a sua idade:");
    scanf ("%i", &idade);
    
    printf ("você tem %i anos\n", idade);
    
    float preco;
    printf (" informe o preco da gasolinha: ");
    scanf ("%f", &preco);
    
    printf(" O preco da gasolinha eh R$ %.2f\n", preco);



    return 0;
}