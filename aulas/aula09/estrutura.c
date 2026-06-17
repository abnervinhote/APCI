#include <stdio.h>

int main() {

    // criar tipo contato
    struct contato_t {
        char nome[61];
        long long int telefone;
    };

    // criar tipo ponto_cartesiano
    struct ponto_cartesiano_t {
        int x;
        int y;
    };

    // criar tipo aluno
    struct aluno_t {
        int matricula;
        char nome[61];
        char email[101];
        char nascimento[11];
    };

    // criar uma variavel do tipo contato
    struct contato_t contato;

    printf("entre com o nome do contato: ");
    scanf(" %[^\n]", contato.nome);

    printf("entre com o telefone do contato: ");
    scanf("%lli", &contato.telefone);

    printf("seu contato: %s - %lli\n", contato.nome, contato.telefone);

    //cria um vetor do tipo contato
    struct contato_t contatos[10];
    int quantidade = 0;

    //incluir o contato
    printf("entre com o nome do contato: ");
    scanf(" %[^\n]", contatos[quantidade].nome);

    printf("entre com o telefone do contato: ");
    scanf("%lli", &contatos[quantidade].telefone);

    quantidade++;

    //listar os contatos
    for (int i = 0; i < quantidade; i++) {
        printf("contato %i: %s - %lli\n",
               i + 1,
               contatos[i].nome,
               contatos[i].telefone);
    }

    // procurar um contato
    int procurado = 0;
    int achei = -1;

    printf("entre com o numero do contato: ");
    scanf("%i", &procurado);

    for (int i = 0; i < quantidade; i++) {
        if (procurado - 1 == i) {
            achei = i;
            break;
        }
    }

    if (achei < 0) {
        printf("não achei o contato %i\n", procurado);
    } else {
        printf("achei o contato %i: %s - %lli\n",
               procurado,
               contatos[achei].nome,
               contatos[achei].telefone);
    }

    return 0;
}