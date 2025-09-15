/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 4
#define DIM2 5
#define ALUNOS 10
#define PROVAS 3

int q1() {
    /*
     Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o 
     maior valor contido nessa matriz e a sua localização (linha e coluna).
    */
    int mat[DIM][DIM]; // = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int linha, coluna;
    srand(time(NULL));
    // for (int i=0; i<DIM; i++) {
    //     for (int j=0; j<DIM; j++) {
    //         printf("mat[%d][%d] ", i, j); 
    //         scanf("%d", &mat[i][j]);
    //     }
    // }
    for (int i=0; i<DIM; i++) {
        for (int j=0; j<DIM; j++) {
            mat[i][j] = rand() % 100;
        }
    }

    linha = 0;
    coluna = 0;
    for (int i=0; i<DIM; i++) {
        for (int j=0; j<DIM; j++) {
            if (mat[i][j] > mat[linha][coluna]) {
                linha = i;
                coluna = j;
            }
            
        }
    }
    
    for (int i=0; i<DIM; i++) {
        for (int j=0; j<DIM; j++) {
            printf("%02d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("Maior valor: mat[%d][%d]=%02d\n", linha, coluna, mat[linha][coluna]);
    return 1;
}

int q2() {
    /*
    Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a
    diagonal principal e com 0 os demais elementos. 
    Ao final, escreva a matriz obtida na tela
    */
    int mat[DIM2][DIM2];
    
    for (int i=0; i<DIM2; i++) {
        for (int j=0; j<DIM2; j++) {
            mat[i][j] = (i==j) ? 1 : 0;
            // if (i==j)
            //     mat[i][j] = 1;
            // else
            //     mat[i][j] = 0;
        }
    }
    for (int i=0; i<DIM2; i++) {
        for (int j=0; j<DIM2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 1;
}

int q3() {
    /* Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas.
       Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi
       na prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de
       alunos cuja pior nota foi na prova 3
    */
    float notas[ALUNOS][PROVAS];
    int piores[PROVAS] = {0, 0, 0};
    
    srand(time(NULL));
    for (int i=0; i<ALUNOS; i++) {
        for (int j=0; j<PROVAS; j++) {
            notas[i][j] = (rand() % 101) / 10.0;
        }
    }
    for (int i=0; i<ALUNOS; i++) {
        for (int j=0; j<PROVAS; j++) {
            printf("%4.1f ", notas[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<ALUNOS; i++) {
        if (notas[i][0] < notas[i][1] && notas[i][0] < notas[i][2]) {
            piores[0]++;
        }
        else {
            if (notas[i][1] < notas[i][2]) {
                piores[1]++;
            } 
            else {
                piores[2]++;
            }
        }
    }
    printf("Piores provas por alunos\n");
    // printf("Prova 1: %d\n", piores[0]);
    // printf("Prova 2: %d\n", piores[1]);
    // printf("Prova 3: %d\n", piores[2]);
    for (int i=0; i<PROVAS; i++) {
        printf("Prova %d: ", i+1);
        printf("%d\n", piores[i]);
    }
    return 1;
}

int main()
{
    q1();
    q2();
    q3();
    return 0;
}