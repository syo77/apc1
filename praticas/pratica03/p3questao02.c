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
      desconto = valor_bruto * 0.01f;
      printf("O desconto é de %.2f:\n ", desconto);
    } else if (valor_bruto >= 100.01f && valor_bruto <= 500.00f) {
      desconto = valor_bruto * 0.05f;
      printf("O desconto é de %.2f:\n", desconto);
    } else {
      desconto = valor_bruto * 0.10f;
      printf("O desconto é de %.2f:\n", desconto);
    }

    float valor_final = valor_bruto - desconto;
    printf("O valor final é %.2f:\n", valor_final);
  } else {
    printf("O valor é inválido. Tente novamente!\n");
  }

  return 0;
}