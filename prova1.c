#include <stdio.h>
#define N 15

int main() {
    int vetor[N];

    for (int i=0; i<N; i++) {
        vetor[i] = N - i;
    }
    for (int i=0; i<N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");


    // int hora, minuto;

    // printf("Digite um horário (HH:MM) ");
    // scanf("%d:%d", &hora, &minuto);

    // if (hora < 12) {
    //     printf("Bom dia\n");
    // }
    // else {
    //     printf("Boa %s\n", (hora < 16) ? "tarde" : "noite");
    //     // if (hora < 16)
    //     //     printf("Boa tarde\n");
    //     // else
    //     //     printf("Boa noite\n");
    // }
    return 0;
}
