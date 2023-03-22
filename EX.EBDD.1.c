/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int vet[5], cont, i;
 
  for(i=0; i < 5; i++){
      printf("\n\n Digite um número qualquer:");
      scanf("%d", &vet[i]);
  }
  cont = 0;
  for(i = 0; i < 5; i++){
      if (vet[i] > 100)
      cont = cont + 1;
  }
 
  printf("\n\n Existem %d valores acima de 100:", cont);
}