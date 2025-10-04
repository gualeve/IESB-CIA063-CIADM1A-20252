/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define N 50
int main()
{
    int hora, minuto;
    printf("Digite uma hora (hh:mm) ");
    scanf("%d:%d", &hora, &minuto);
    if (hora < 12) {
        printf("Bom dia\n");
    } 
    if (hora > 12 && hora < 18)
        printf("Boa tarde\n");
    if (hora >= 18)
        printf("Boa noite\n");

    // int vetor[N];
    // for (int i=0; i<N; i++) {
    //     vetor[i] = i * 2;
    // }
    // for (int i=0; i<N; i++) {
    //     printf("%d ", vetor[i]);
    // }
    
    
    
    
    
    return 0;
}
