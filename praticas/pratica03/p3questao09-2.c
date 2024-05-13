/*
9. Faça um programa em C que leia números até ler zero, e imprima o maior e o
menor entre eles.
*/

#include <stdio.h>
int main() {

  int numero;
  int numerotrue = 0;
  int maior = 0;
  int menor = 0;

  while (!numerotrue) {
    printf("Entre com um número (0 vai parar): ");
    int deucerto = scanf("%i", &numero);
    getchar(); //limpar o \n;

    numerotrue = deucerto && numero == 0;

    if (numero == 0) {
      break;
    }

    if (maior < numero) {
      maior = numero;
    }

    if (menor > numero) {
      menor = numero;
    }
  }

  printf("O maior número entre os digitados é %i\n", maior);
  printf("O menor número entre os digitados é %i\n", menor);

  return 0;
}