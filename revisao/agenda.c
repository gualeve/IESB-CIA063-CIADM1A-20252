#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM_NOME 50
#define TAM_FONE 15
#define TAM_EMAIL 50

typedef struct {
    char nome[TAM_NOME];
    char fone[TAM_FONE];
    char email[TAM_EMAIL];
} contato_type;
typedef struct {
    int valido;
    contato_type contato;
} item_type;

item_type *criar_agenda(int);  // protótipo
int main() {
    item_type *agenda;
    int max;
    char nome[TAM_NOME];
    int op = 3;

    printf("Informe a quantidade de contatos: ");
    scanf("%d", &max);
    agenda = criar_agenda(max);
    while (op != 0) {
        menu();
        switch (op)
        {
        case 1:
            inserir_item(agenda);
            break;
        case 2:
            printf("Nome: ");
            fgets(nome, TAM_NOME, stdin);
            remover_item(agenda, nome);
        default:
            break;
        }
    }
    free(agenda);
    return 0;
}
item_type *criar_agenda(int qtd) {
    return (item_type *)calloc(qtd, sizeof(item_type));
}

    // for (int i=0; i<max; i++) {
    //     printf("Nome: ");
    //     getchar();
    //     fgets(agenda[i].contato.nome, TAM_NOME, stdin);
    //     printf("Fone: ");
    //     fgets(agenda[i].contato.nome, TAM_FONE, stdin);
    //     printf("Email: ");
    //     fgets(agenda[i].contato.nome, TAM_EMAIL, stdin);
    //     agenda[i].valido = 1;
    // }
