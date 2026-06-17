#include <stdio.h>
#include <string.h>

int main() {

    char texto[20];

    texto[0] = 'O';
    texto[1] = 'l';
    texto[2] = 'a';
    texto[3] = ' ';
    texto[4] = 'p';
    texto[5] = 'e';
    texto[6] = 's';
    texto[7] = 's';
    texto[8] = 'o';
    texto[9] = 'a';
    texto[10] = '\0';

    printf("%s\n", texto);

    // Substitui a string por "Bom"
    strcpy(texto, "Bom");
    printf("%s\n", texto);

    // Imprime caractere por caractere (vai imprimir lixo de memória da palavra "pessoa")
    for (int i = 0; i < 11; i++) {
        printf("%c", texto[i]);
    }

    printf("\n");

    // Concatena a string
    strcat(texto, " dia");
    printf("%s\n", texto);

    // Tamanho da string
    int tamanho = strlen(texto);

    printf("o texto '%s' tem %i caracteres \n", texto, tamanho);
    int capacidade = sizeof(texto);
    printf ("O texto guarda ate %i caracteres\n", capacidade);

   //preencher string com um caracter
   memset(texto, 'a',8);
   texto[8] = '\0'; // Adicionei o fechamento da string para o printf não ler o lixo de memória!
   printf ("%s\n", texto);
   
   //limpa a sring
   memset (texto, '0', capacidade);
   printf("%s\n", texto);

   //string < outra> string ==outra
   int compara = strcmp ("banana", "laranja"); // <ordem eh antes
   printf ("compara banan com laranja = %i\n", compara);

   compara = strcmp ("laranha", "banana"); // >0 ondem eh depois
   printf ("compara laranja com banana = %i\n", compara);

   compara = strcmp ("banana", "banana"); // 0 = sao iguais
   printf ("compara banana com banana = %i\n", compara);

   compara = strcmp ("banana", "BANANA"); // 0 = sao iguais
   printf ("compara banana com BANANA = %i\n", compara);


   // procura uma caractere no to string
  char *tem_letra_a [] = strchr ("sergie", 'a');
  printf ("sergipe tem a letra 'a"? %s\n, tem_a_letra_a);
  char *tem_letra_a [] = strchr ("roraima", 'a');
  printf ("roraima tem a letra 'a"? %s\n, tem_a_letra_a);


//procurar uma string na string
char *tem_silva = strstr("joao da silva neto", "silva");
printf ("'joao da silva neto' tem 'silva'"? %s\n, tem silva);

char *tem_silva = strstr("jose da silva", "silva");
printf ("'jose de souza' tem 'silva'"? %s\n, tem silva);


    return 0;
}