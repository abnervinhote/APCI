#include <stdio.h>
#include <stdlib.h>
#include <std


int main () {

    int opcao = 0;

    do {
        system("clear");
        printf("Menu Principal \n");
        printf("1 - Consultar saldo\n");
        printf("2 - Fazer recarga\n");
        printf("3 - Ver mensagens recebidas\n");
        printf("4 - Ver ultimas chamadas\n");
        printf("5 - Sair\n");

        printf("Escolha uma opcao => ");
        scanf("%i", &opcao);

        while (getchar() != '\n');

        switch(opcao) {

            case 1:
                printf("Seu saldo eh de R$ 10,00\n");
                break;

            case 2: {
            
            
            
            
            }
                printf("Escolha entre 10, 20 ou 50\n");
                break;

            case 3:
                printf("Voce nao tem mensagens\n");
                break;

            case 4:
                printf("982056206\n");
                break;

            case 5:
                printf("Agradecemos seu contato. Ate logo\n");
                break;

            default:
                printf("Opcao invalida, tente de novo\n");

        }
printf("Presione Enter para continuar")
getchar ();



        printf("\n");

    } while (opcao != 5);

    return 0;


}