/******************************************************************************

VETOR -- ARRAY

*******************************************************************************/
#include <stdio.h>
#define QTD_ALUNOS 5

int main()
{
    // float n11, n12, n13, n14, n15;
    // float n21, n22, n23, n24, n25;
    float notas1[QTD_ALUNOS];
    float notas2[QTD_ALUNOS];
    float medias[2] = {0, 0};
    // medias = {0, 0}; <---- FORMA ERRADA!!!!
    medias[0] = 0;
    medias[1] = 0;
    
    for (int i=0; i<QTD_ALUNOS; i++) {
        printf("Nota 1 do aluno %d: ", i+1);
        scanf("%f", &notas1[i]);
    }
    for (int i=0; i<QTD_ALUNOS; i++) {
        printf("Nota 2 do aluno %d: ", i+1);
        scanf("%f", &notas2[i]);
    }
    for (int i=0; i<QTD_ALUNOS; i++)
        medias[0] += notas1[i];
    medias[0] /= QTD_ALUNOS;
    
    for (int i=0; i<QTD_ALUNOS; i++)
        medias[1] += notas2[i];
    medias[1] /= QTD_ALUNOS;

    printf("\nMédia da prova 1 = %4.1f\n", medias[0]);
    printf("\nMédia da prova 2 = %4.1f\n", medias[1]);

    return 0;
}
