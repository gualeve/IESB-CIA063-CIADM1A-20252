/******************************************************************************

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define TAM 10
int main()
{
    char nome_completo[2*TAM];
    char nome[TAM];
    char sobrenome[TAM];
    
    printf("Digite o seu nome\n");
    fgets(nome, TAM, stdin);
    getchar();
    printf("Digite o seu sobrenome\n");
    fgets(sobrenome, TAM, stdin);
    if (strlen(nome) < TAM-1)
        nome[strlen(nome)-1] = '\0';
    if (strlen(sobrenome) < TAM-1)
        sobrenome[strlen(sobrenome)-1] = '\0';
    if (strstr(str1, str2) == NULL)
        printf("Não encontrado\n");
    else
        printf("Encontrou\n");
    strcpy(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);
    printf("%s\n", nome_completo);

    return 0;
}