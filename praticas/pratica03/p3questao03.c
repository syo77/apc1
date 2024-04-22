/*
3. Faça um programa em C que imprima um qualitativo associado a uma nota lida
conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 =
Ótimo, e imprima Nota inválida nos demais casos.
*/

#include <stdio.h>
int main() {

  int nota;
  printf("Insira a nota obtida: ");
  int deu_certo = scanf("%i", &nota);

  if (deu_certo) {
    if (nota == 1 && nota <= 1.9) {
      printf("A mensão é Ruim.\n");
    } else if (nota == 2 && nota <= 2.9) {
      printf("A mensão é Insuficiente.\n");
    } else if (nota == 3 && nota <= 3.9) {
      printf("A mensão é Suficiente.\n");
    } else if (nota == 4 && nota <= 4.9) {
      printf("A mensão é Bom.\n");
    } else if (nota == 5) {
      printf("A mensão é Ótimo.\n");
    }
  } else {
    printf("Nota inválida\n");
  }

  return 0;
}