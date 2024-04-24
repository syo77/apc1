/*
5. Faça um programa em C que leia um ano e verifique se ele é bissexto (é
múltiplo de 4 e não é múltiplo de 100, ou é múltiplo de 400).
*/

#include <stdio.h>
int main() {

  int ano;

  printf("Digite o ano desejado: ");
  int deu_certo = scanf("%i", &ano);

  if (deu_certo) {

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
      printf("O ano %i é bissexto\n", ano);
    } else {
      printf("O ano %i não é bissexto\n", ano);
    }
  }

  return 0;
}