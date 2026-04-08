#include <stdio.h>

int main() {
    // short int para números menores (até ~32 mil)
    short int numero_paises = 195;
    
    // int para números médios
    int numero_idiomas = 7100;
    
    // long long int para números gigantes (como 8 bilhões)
    long long int populacao_mundial = 8274065924LL;
    
    // long double para máxima precisão decimal
    long double proporcao_aurea = 1.61803398874989484820L;

    printf("--- Dados Mundiais ---\n");
    printf("Numero de paises: %hi\n", numero_paises);
    printf("Numero de idiomas: %i\n", numero_idiomas);
    printf("Populacao mundial: %lld\n", populacao_mundial);
    printf("Proporcao aurea: %.20Lf\n", proporcao_aurea);

    return 0;
}