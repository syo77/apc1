/*
10. Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.
  */

#include <stdio.h>

int main()
{

  int numero, i;

  printf("Insira um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);
  for (i = 1; i <= 10; ++i) {
    printf("\n %i x %i = %i\n", numero, i, numero * i);
  }
 


  return 0;
}
