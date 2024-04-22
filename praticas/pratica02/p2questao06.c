/*
6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano
de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de
depreciação - ano de fabricação) x 0,01 x valor de compra).
  */

#include <stdio.h>
int main() {
  float valor_de_compra, ano_de_fabricacao, depreciacao, ano_de_depreciacao;

  printf("\x1b[32mDigite o ano de depreciação: \x1b[0m");
  int deu_certo = scanf("%f", &ano_de_depreciacao);

  printf("\x1b[32mDigite o ano de frabricação: \x1b[0m");
  deu_certo = scanf("%f", &ano_de_fabricacao);

  printf("\x1b[32mDigite o valor de compra: \x1b[0m");
  deu_certo = scanf("%f", &valor_de_compra);

  depreciacao =
      (ano_de_depreciacao - ano_de_fabricacao) * 0.01 * valor_de_compra;

  printf("\x1b[35mA depreciação do veículo é %.2f: \x1b[0m\n", depreciacao);

  float depre_final = valor_de_compra - depreciacao;

  printf("\x1b[35mA depreciação final foi %.2f: \x1b[0m\n", depre_final);

  return 0;
}