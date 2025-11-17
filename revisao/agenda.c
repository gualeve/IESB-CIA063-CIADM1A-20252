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
int menu();
void inserir_contato(item_type agenda[], int max);
void consultar_contato(item_type agenda[], char nome[], int max);
void remover_contato(item_type agenda[], char nome[], int max);

int main() {
    item_type *agenda;
    int max;
    char nome[TAM_NOME];
    int op;

    printf("Informe a quantidade de contatos: ");
    scanf("%d", &max);
    agenda = criar_agenda(max);
    do {
        op = menu();
        switch (op)
        {
        case 1:
            inserir_contato(agenda, max);
            break;
        case 2:
            printf("Nome: ");
            fgets(nome, TAM_NOME, stdin);
            consultar_contato(agenda, nome, max);
            break;
        case 3:
            printf("Nome: ");
            fgets(nome, TAM_NOME, stdin);
            remover_contato(agenda, nome, max);
            break;
        default:
            break;
        }
    } while (op != 0);
    free(agenda);
    return 0;
}

item_type *criar_agenda(int qtd) {
    return (item_type *)calloc(qtd, sizeof(item_type));
}



int menu() {
    int opcao;

    do {
        printf("1 - Inserir contato\n");
        printf("2 - Consultar contato\n");
        printf("3 - Remover contato\n");
        printf("0 - Sair\n");
        printf(">> ");
        scanf("%d", &opcao);
    } while (opcao < 0 || opcao > 3);
    getchar();
    return opcao;
}

void inserir_contato(item_type agenda[], int max) {
    int indice = 0;
    while (indice < max && agenda[indice].valido)
        indice++;
    if (indice == max) {
        printf("Agenda cheia\n");
    } else {
        printf("Nome: ");
        getchar();
        fgets(agenda[indice].contato.nome, TAM_NOME, stdin);
        printf("Fone: ");
        fgets(agenda[indice].contato.nome, TAM_FONE, stdin);
        printf("Email: ");
        fgets(agenda[indice].contato.nome, TAM_EMAIL, stdin);
        agenda[indice].valido = 1;
    }
    return;
}

void consultar_contato(item_type agenda[], char nome[], int max) {
    int encontrou = 0;
    for (int i=0; i<max; i++) {
        if (strcmp(agenda[i].contato.nome, nome) == 0) {
            printf("Nome: %s\n", agenda[i].contato.nome);
            printf("Fone: %s\n", agenda[i].contato.fone);
            printf("Email: %s\n", agenda[i].contato.email);
            encontrou = 1;
            break;
        }
    }
    if (encontrou == 0) {
        printf("Contato não encontrado\n");
    }
}

void remover_contato(item_type agenda[], char nome[], int max) {
    int encontrou = 0;
    for (int i=0; i<max; i++) {
        if (strcmp(agenda[i].contato.nome, nome) == 0) {
            agenda[i].valido = 0;
            encontrou = 1;
            break;
        }
    }
    if (encontrou == 0) {
        printf("Contato não encontrado\n");
    }
}