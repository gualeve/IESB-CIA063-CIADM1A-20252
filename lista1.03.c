/******************************************************************************
Lista 1.03
*******************************************************************************/
#include <stdio.h>

int q2() {
    /*
    Faça um algoritmo que leia um número positivo e imprima seus divisores. 
    Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
    */
    int numero;
    putchar('>');
    scanf("%d", &numero);
    for (int i=1; i<=numero/2; i++) {
        if (numero % i == 0)
            printf("(%d) ", i);
    }
    printf("(%d)\n", numero);
    
    return 1;
}

int q3() {
    /*
    Escreva um programa que leia o valor de N e calcule a somatória S dada 
    pela seguinte fórmula:
    S = 1/1 + 3/2 + 5/3 + 7/4 + ... + (2𝑁−1)/𝑁
    */
    int n;
    float soma = 0;
    putchar('>');
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        soma += (2.0 * i - 1) / i;
    }
    printf("Somatória = %.1f para n=%d\n", soma, n);
    
    return 1;
}

int main() {
    // q2();
    q3();
    
    return 0;
}