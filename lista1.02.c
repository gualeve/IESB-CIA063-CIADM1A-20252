/******************************************************************************


*******************************************************************************/
#include <stdio.h>

int questao4() {
    /*
    Faça um programa que receba a altura e o sexo de uma pessoa e calcule e 
    mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” 
    corresponde à altura):
        - Homens: (72,7 * h) – 58
        - Mulheres: (62,1 * h) – 44,7
    */
    char genero;
    float altura;
    float peso;
    
    puts("Informe o gênero: (M/F)");
    genero = getchar();
    puts("informe a altura (m):");
    scanf("%f", &altura);
    if (genero == 'M' || genero == 'm') {
        peso = (72.7 * altura) - 58;
    } else {
        if (genero == 'F' || genero == 'f') {
            peso = (62.1 * altura) - 44.7;
        } else {
            puts("ERRO");
            return 0;
        }
    }
    printf("Peso ideal: %5.1fKg", peso);
    return 1;
}

int questao5() {
    
    return 1;
}

int questao6() {
    /*
    Faça um programa que mostre ao usuário um menu com quatro opções de 
    operações matemáticas (as operações básicas, por exemplo). 
    O usuário escolhe uma das opções, e o seu programa pede dois valores 
    numéricos e realiza a operação, mostrando o resultado.
    */
    char operacao;
    float x, y;
    
    puts("MENU");
    puts("+ - Soma");
    puts("- - Subtração");
    puts("* - Multiplicação");
    puts("/ - Divisão");
    puts("Escolha uma operação:");
    scanf("%c", &operacao);
    puts("x:");
    scanf("%f", &x);
    puts("y:");
    scanf("%f", &y);
    switch (operacao) {
        case '+':
            printf("%.2f + %f = %f\n", x, y, x + y);
            break;
        case '-':
            printf("%f - %f = %f\n", x, y, x - y);
            break;
        case '*':
            printf("%f * %f = %f\n", x, y, x * y);
            break;
        case '/':
            printf("%f / %f = %f\n", x, y, x / y);
            break;
        default:
            puts("Operação inválida");
    }

    return 1;
}

int questao7() {
    /*
    Faça um programa para verificar se determinado número inteiro lido é 
    divisível por 3 ou 5, mas não simultaneamente pelos dois.
    */
    int numero;
    
    puts("Informe um número inteiro");
    scanf("%d", &numero);
    
    // Este if poderia ser: if ((numero % 3 == 0 && numero % 5 != 0) || (numero % 3 != 0 && numero % 5 == 0))
    if (numero % 3 == 0 ^ numero % 5 == 0)
        printf("%d é divisível por 3 ou 5 exclusivamente", numero);
    else
        printf("%d não é divisível por 3 ou 5 exclusivamente", numero);
    
    return 1;
}


int main()
{
    int questao;
    
    do {
        puts("MENU");
        puts("4 - Questão 4");
        puts("5 - Questão 5");
        puts("6 - Questão 6");
        puts("7 - Questão 7");
        puts("0 - Finaliza");
        puts("Escolha uma questão:");
        scanf("%d", &questao);
        getchar();
        switch (questao) {
            case 4:
                questao4();
                break;
            case 5:
                questao5();
                break;
            case 6:
                questao6();
                break;
            case 7:
                questao7();
                break;
            default:
                puts("Questão inválida");
        }
    } while (questao != 0);
    puts("\nFIM DO PROGRAMA");

    return 0;
}