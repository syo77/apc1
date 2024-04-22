/*
1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/

#include <stdio.h>
int main() {

  int numero;

  printf("Insira um número inteiro: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo) {

    if (numero % 2 == 0) {
      printf("\x1b[32mO número %i é par!\x1b[0m\n", numero);

    } else {
      printf("\x1b[32mO número %i é ímpar!\x1b[0m\n", numero);
    }
  } else {
    printf("\x1b[31mInsira apenas números inteiros!\x1b[0m\n");
  }

  return 0;
}