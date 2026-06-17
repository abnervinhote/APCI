#include <stdio.h>
#include <string.h>

int main() {
    char verbo[100];
    
    printf("Digite um verbo: ");
    scanf("%99s", verbo);
    
    int tamanho = strlen(verbo);
    
    if (tamanho >= 2 && verbo[tamanho - 2] == 'a' && verbo[tamanho - 1] == 'r') {
        printf("O verbo '%s' termina com 'ar'.\n", verbo);
    } else {
        printf("O verbo '%s' nao termina com 'ar'.\n", verbo);
    }
    
    return 0;
}