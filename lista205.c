/*
Escreva uma função que receba como parâmetro a quantidade de alunos de
uma turma. A função deve alocar um vetor de structs que representam os alunos
(matrícula e nome) e retornar um ponteiro para o vetor alocado. 
Escreva outra função que recebe a matrícula e o nome do aluno além de um índice “i” e um
ponteiro para o vetor de alunos como parâmetros. Esta função deve gravar os
dados do aluno na posição “i” do vetor.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAM_NOME 50

typedef struct {
    int mat;
    char nome[TAM_NOME];
} aluno_type;
aluno_type *criar_vetor(int);
void preencher_elemento(int, char [], int, aluno_type []);
void imprimir_vetor(aluno_type [], int);
// char [] <==> char *
// aluno_type [] <==> aluno_type *



int main() {
    int qtd;
    int mat;
    char nome[TAM_NOME];
    int i;
    aluno_type *ptr_alunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd);
    ptr_alunos = criar_vetor(qtd);

    for (int i = 0; i<qtd; i++) {
        printf("Matrícula: ");
        scanf("%d", &mat);
        printf("Nome: ");
        getchar();
        fgets(nome, TAM_NOME, stdin);
        preencher_elemento(mat, nome, i, ptr_alunos);
    }
    imprimir_vetor(ptr_alunos, qtd);
    free(ptr_alunos);
    return 0;
}

aluno_type *criar_vetor(int tam) {
    return (aluno_type *)malloc(sizeof(aluno_type) * tam);
}

void preencher_elemento(int mat, char nome[], int i, aluno_type alunos[]) {
    alunos[i].mat = mat;
    strcpy(alunos[i].nome, nome);

    return;
}

void imprimir_vetor(aluno_type vetor[], int tam) {
    for (int i=0; i<tam; i++) {
        printf("%5d - %s\n", vetor[i].mat, vetor[i].nome);
    }
    return;
}