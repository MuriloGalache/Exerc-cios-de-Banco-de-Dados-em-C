/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float matriz[4][4];
    int i, j;
    float soma_impar = 0, soma_par = 0;

    
    printf("Informe os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    
    for (j = 0; j < 4; j++) {
        for (i = 0; i < 4; i++) {
            if (j % 2 == 0) {
                soma_par += matriz[i][j];
            } else {
                soma_impar += matriz[i][j];
            }
        }
    }

    
    printf("A soma dos elementos da coluna par é: %.2f\n", soma_par);
    printf("A soma dos elementos da coluna impar é: %.2f\n", soma_impar);

    
    return 0;
}
