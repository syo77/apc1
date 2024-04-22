/*
  9. Faça um programa em C que converta uma idade expressa em anos, meses e dias
  para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/

#include <stdio.h>
int main() {

  int anos;
  int meses;
  int dias;
  int total_dias;

  printf("Digite a quantidade de anos: ");
  int deu_certo = scanf("%d", &anos);

  printf("Digite a quantidade de meses: ");
  deu_certo = scanf("%d", &meses);

  printf("Digite a quantidade de dias: ");
  deu_certo = scanf("%d", &dias);

  total_dias = (anos * 365) + (meses * 30) + dias;

  printf("\x1b[32mA idade em dias é %i\x1b[0m\n", total_dias);

  return 0;
}