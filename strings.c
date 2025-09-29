#include <stdio.h>
#include <string.h>
#define TAM 10
int main() {
    char nome[TAM];
    char sobrenome[TAM];
    char nome_completo[2*TAM];
    fgets(nome, TAM, stdin);
    if (strlen(nome) < TAM - 1)
        nome[strlen(nome)-1] = '\0';
    fgets(sobrenome, TAM, stdin);
    if (strlen(sobrenome) < TAM - 1)
        sobrenome[strlen(sobrenome)-1] = '\0';
    strcpy(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);


    printf("%s (%d)\n", nome, strlen(nome));
    printf("%s (%d)\n", sobrenome, strlen(sobrenome));

    printf("%s\n", nome_completo);
    return 0;
}