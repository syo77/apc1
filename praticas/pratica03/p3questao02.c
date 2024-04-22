/*
2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto
lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%;
acima de 500.00 aplica 10%
*/

#include <stdio.h>

int main() {

  float desconto;
  float valor_bruto;

  printf("Digite o valor bruto: ");
  int deu_certo = scanf("%f", &valor_bruto);

  if (deu_certo) {

    if (valor_bruto >= 0.00f && valor_bruto <= 100.00f) {
      desconto = valor_bruto * 0.01;
      printf("O desconto %.2f é de:\n ", desconto);
    } else if (valor_bruto >= 100.01f && valor_bruto <= 500.00) {
      desconto = valor_bruto * 0.05;
      printf("O desconto %.2f é de:\n", desconto);
    }
  } else {
    desconto = valor_bruto * 0.10;
  }
  float valor_final = valor_bruto - desconto;
  printf("O valor final é %.2f:\n", valor_final);

  return 0;
}