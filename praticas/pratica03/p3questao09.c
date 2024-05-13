/*
9. Faça um programa em C que leia dez números e imprima o maior e o menor entre
eles.
*/

#include <stdio.h>
int main() {

  int numero;
  int maior;
  int menor;

  printf("Entre com o 1º número: ");
  int deucerto = scanf("%i", &numero);

  maior = menor = numero;

  if (deucerto) {
    for (int i = 2; i <= 10; i++) {
      printf("Entre com o %iº número: ", i);
      deucerto = scanf("%i", &numero);

      if (numero > maior) {
        maior = numero;
      } else if (numero < menor) {
        menor = numero;
      }
    }
  }
  printf("\nO maior número digitado é: %i\n", maior);
  printf("O menor número digitado é: %i\n", menor);

  return 0;
}