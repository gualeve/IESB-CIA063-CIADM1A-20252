#include<stdio.h>
#include<string.h>
#define TAM 100

int q1() {
    char str[TAM];

    printf("Digite uma string: ");
    fgets(str, TAM, stdin);
    if (strlen(str) < TAM-1)
        str[strlen(str)-1] = '\0';
    for (int i=strlen(str)-1; i>=0; i--)
        printf("%c", str[i]);
    printf("\n");

    return 1;
}

int q2() {
    char str1[TAM];
    char str2[TAM];

    printf("Digite uma string: ");
    fgets(str1, TAM, stdin);
    if (strlen(str1) < TAM-1)
        str1[strlen(str1)-1] = '\0';
    printf("Digite um padrão: ");
    fgets(str2, TAM, stdin);
    if (strlen(str2) < TAM-1)
        str2[strlen(str2)-1] = '\0';     
        
    if (strstr(str1, str2) != NULL) {
        printf("Encontrou\n");
    } else {
        printf("Não encontrou\n");
    }
    return 1;
}
int q3() {
    char nome[TAM];
    int j = 0;
    printf("Digite uma string: ");
    fgets(nome, TAM, stdin);
    if (strlen(nome) < TAM-1)
        nome[strlen(nome)-1] = '\0';
    while (nome[j] == ' ')
        j++;
    printf("%c.", nome[j]);
    for (int i=j+1; i<strlen(nome); i++) {
        if (nome[i] != ' ' && nome[i-1] == ' ')
            printf("%c.", nome[i]);
    }
    printf("\n");

    return 1;
}
int main() {
    // q1();
    // q2();
    q3();
}
