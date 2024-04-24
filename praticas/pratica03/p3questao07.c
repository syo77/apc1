/*
7. Escrever um programa em C que liste os 10 primeiros números da série de
Fibonacci.
*/

#include <stdio.h>
int main() {

  int n1 = 0, n2 = 1, proximo;

  printf("Os 10 primeiros números da série de Fibonacci são:\n");

  for (int i = 0; i < 10; i++) {
    printf("%i\n", n1);
    proximo = n1 + n2;
    n1 = n2;
    n2 = proximo;
  }

  return 0;
}