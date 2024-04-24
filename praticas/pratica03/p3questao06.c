/*
6. Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100.
*/

#include <stdio.h>
int main() {

printf("Números múltiplos de 3 entre 1 e 100:\n");
  
  for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0) {
      printf("%i\n", i);
    }
  }
  return 0;
}