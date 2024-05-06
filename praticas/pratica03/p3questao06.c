/*
6. Faça um programa em C que liste todos os múltiplos de n, entre 1 e 100.
*/

#include <stdio.h>
int main() {

  int numero;

  printf("Insira um número entre 1 e 100: ");
  int deucerto = scanf("%i", &numero);

  if (deucerto && numero > 0 && numero <= 100) {
    printf("Os múltiplos de %i entre 1 e 100\n", numero);
    /* for (int i = 1; i <= 100; i++) {
       if (i % numero == 0) {
         printf("%i\n", i);
       }
      */
    for (int i = numero; i <= 100; i = i + numero) {
      printf("%i\n", i);
    }
  } else {
    printf("Número inválido. Tente novamente.");
  }
  return 0;
}