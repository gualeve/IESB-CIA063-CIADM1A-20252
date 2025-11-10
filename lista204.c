#include<stdio.h>
#include<math.h>
#define PI 3.141592

typedef struct {
    int hora;
    int min;
    int seg;
} horario_type;

int segundos(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

int horario_valido(horario_type horario) {
    // versão 1:
    return !(horario.hora < 0 || horario.hora > 23 || horario.min < 0 || horario.min > 59 || horario.seg < 0 || horario.seg > 59);

    // // versão 2:
    // if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59)
    //     return 0;
    // return 1;

    // // versão 3:
    // if (h < 0 || h > 23)
    //     return 0;
    // if (m < 0 || m > 59)
    //     return 0;
    // if (s < 0 || s > 59)
    //     return 0;
    // return 1;
}

void calcula_esfera(int r, float *v, float *a) {
    *v = (4 * PI * pow(r, 3)) / 3;
    *a = 4 * PI * pow(r, 2);
    return;
}

int main() {
    // Questão 5
    int raio;
    float volume, area;

    printf("Digite o raio da esfera: ");
    scanf("%d", &raio);
    calcula_esfera(raio, &volume, &area);
    printf("Esfera de raio %d tem área=%.2f e volume=%.2f\n", raio, area, volume);

    // Questão 2:
    // horario_type horario;

    // printf("Digite um horário no formato (HH:MM:SS): ");
    // scanf("%d:%d:%d", &horario.hora, &horario.min, &horario.seg);

    // if (horario_valido(horario))
    //     printf("Valor em segundos é: %d\n", segundos(horario.hora, horario.min, horario.seg));
    // else
    //     printf("Horário inválido\n");
    return 0;
}