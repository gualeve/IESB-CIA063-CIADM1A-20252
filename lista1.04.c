/******************************************************************************
Lista 1.04
*******************************************************************************/
#include <stdio.h>
#define TAM_VET 10

int q3() {
    /*
    Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
    números naturais que não são múltiplos de 7. Ao final, imprima esse vetor
    na tela.
    */
    int vetor[TAM_VET];

    for(int i=0, j=0; i<TAM_VET; i++, j++) {
        if (j % 7 == 0)
            j++;
        vetor[i] = j;
    }
    
    for(int i=0; i<TAM_VET; i++) {
        printf("%d ", vetor[i]);
    }
}

int q4() {
    /*
    Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais
    e os escreva na tela.
    */
    int vetor[TAM_VET] = {5, 7, -3, 2, 5, 7, 5, 90, 14, 2};
    
    for (int i=0; i<TAM_VET; i++) {
        for (int j=i+1; j<TAM_VET; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
                break;
            }
        }
    }
    
    return 1;
}


int main()
{
    // q3();
    q4();

    return 0;
}