#include <stdio.h>
#define N 3
typedef struct {
    int matricula;
    float nota1;
    float nota2;
} aluno_type;

/*
Crie um programa que contém um vetor de N structs de alunos com os campos:
{matricula, nota1, nota2}. Usando apenas aritmética de ponteiros, imprima os
dados na tela (um aluno por linha).
*/
int main() {
    aluno_type alunos[N];
    aluno_type *p;

    for (int i=0; i<N; i++) {
        printf("Matrícula do aluno %d: ", i);
        scanf("%d", &alunos[i].matricula);
        printf("-- Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("-- Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }
    p = &alunos[0];
    do {
        printf("%10d ", p->matricula);
        printf("%4.1f ", p->nota1);
        printf("%4.1f\n", p->nota2);
        p++;
    } while (p <= &alunos[N-1]);

    return 0;
}