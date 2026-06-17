#include <stdio.h>
#include <string.h>

// Estrutura do registro (exigencia do trabalho)
struct Contato {
    int id;
    char nome[50];
    int telefone;
};

int main() {
    struct Contato agenda[10];
    int qtd = 0; // Controla a quantidade de registros
    int opcao;
    int i; // Variavel de laco comum

    do {
        // Menu simples e direto
        printf("\n--- MENU DE CADASTRO ---\n");
        printf("1. Cadastrar contato\n");
        printf("2. Listar contatos\n");
        printf("3. Buscar por ID\n");
        printf("4. Atualizar contato\n");
        printf("5. Remover contato\n");
        printf("6. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: {
                // Bloqueia se chegar em no numero 10
                if (qtd >= 10) {
                    printf("Erro: A agenda esta cheia!\n");
                    break;
                }
                
                int novoId;
                printf("Digite o ID: ");
                scanf("%d", &novoId);

                // Verificacao simples de ID duplicado
                int achou = 0;
                for (i = 0; i < qtd; i++) {
                    if (agenda[i].id == novoId) {
                        achou = 1;
                    }
                }
                
                if (achou == 1) {
                    printf("Erro: Esse ID ja existe!\n");
                    break;
                }

                // Salva o novo ID
                agenda[qtd].id = novoId;
                
                // Leitura padrao de string com espacos
                printf("Digite o nome: ");
                scanf(" %[^\n]s", agenda[qtd].nome); 

                printf("Digite o telefone (apenas numeros): ");
                scanf("%d", &agenda[qtd].telefone);

                qtd++;
                printf("Contato cadastrado com sucesso!\n");
                break;
            }
            
            case 2: {
                if (qtd == 0) {
                    printf("Nenhum contato salvo ainda.\n");
                    break;
                }
                
                printf("\n--- CONTATOS SALVOS ---\n");
                for (i = 0; i < qtd; i++) {
                    printf("ID: %d | Nome: %s | Tel: %d\n", agenda[i].id, agenda[i].nome, agenda[i].telefone);
                }
                break;
            }
            
            case 3: {
                if (qtd == 0) {
                    printf("Agenda vazia.\n");
                    break;
                }

                int buscaId;
                printf("Qual ID voce quer buscar? ");
                scanf("%d", &buscaId);

                int encontrado = -1;
                for (i = 0; i < qtd; i++) {
                    if (agenda[i].id == buscaId) {
                        encontrado = i; // Salva a posicao onde achou
                    }
                }

                if (encontrado != -1) {
                    printf("\nAchou! Nome: %s | Telefone: %d\n", agenda[encontrado].nome, agenda[encontrado].telefone);
                } else {
                    printf("Contato nao encontrado.\n");
                }
                break;
            }
            
            case 4: {
                if (qtd == 0) {
                    printf("Agenda vazia.\n");
                    break;
                }

                int atuId;
                printf("Qual ID voce quer atualizar? ");
                scanf("%d", &atuId);

                int indice = -1;
                for (i = 0; i < qtd; i++) {
                    if (agenda[i].id == atuId) {
                        indice = i;
                    }
                }

                if (indice != -1) {
                    printf("Digite o novo nome: ");
                    scanf(" %[^\n]s", agenda[indice].nome);

                    printf("Digite o novo telefone: ");
                    scanf("%d", &agenda[indice].telefone);
                    
                    printf("Dados atualizados!\n");
                } else {
                    printf("Contato nao encontrado.\n");
                }
                break;
            }
            
            case 5: {
                if (qtd == 0) {
                    printf("Agenda vazia.\n");
                    break;
                }

                int remId;
                printf("Qual ID voce quer remover? ");
                scanf("%d", &remId);

                int posicao = -1;
                for (i = 0; i < qtd; i++) {
                    if (agenda[i].id == remId) {
                        posicao = i;
                    }
                }

                if (posicao != -1) {
                    // Logica de deslocamento do vetor exigida pela questao
                    for (i = posicao; i < qtd - 1; i++) {
                        agenda[i] = agenda[i + 1];
                    }
                    qtd--; // Atualiza a contagem oficial
                    printf("Contato removido do sistema!\n");
                } else {
                    printf("Contato nao encontrado.\n");
                }
                break;
            }
            
            case 6:
                printf("Encerrando o programa...\n");
                break;
                
            default:
                printf("Opcao invalida. Digite de 1 a 6.\n");
        }

    } while (opcao != 6);

    return 0;
}