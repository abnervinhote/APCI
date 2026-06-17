#include <stdio.h>

int main() {
    float notas[10][2];
    float medias[10];

    printf("=== Inserindo as Notas ===\n");
    for (int i = 0; i < 10; i++) {
        printf("\n-- Aluno %d --\n", i + 1);
        
        printf("Nota 1: ");
        scanf("%f", &notas[i][0]);
        
        printf("Nota 2: ");
        scanf("%f", &notas[i][1]);
        
        
        medias[i] = (notas[i][0] + notas[i][1]) / 2.0;
    }

    printf("\nNOTAS\n");
    printf("Aluno\t\tNota 1\t\tNota 2\t\tMedia\n");
    printf("--------------------------------------------------\n");
    
    for (int i = 0; i < 10; i++) {
       
        printf("%d\t\t%.1f\t\t%.1f\t\t%.1f\n", i + 1, notas[i][0], notas[i][1], medias[i]);
    }
    printf("==================================================\n");

    return 0;
}