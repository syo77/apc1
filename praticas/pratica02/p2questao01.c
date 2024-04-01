/*
1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.
*/

#include <stdio.h>

int main()
{

  float num1, num2, num3;

  printf("Digite o primeiro número: ");
  int deu_certo = scanf("%f", &num1);

  printf("Digite o segundo número: ");
  deu_certo = scanf("%f", &num2);

  printf("Digite o terceiro número: ");
  deu_certo = scanf("%f", &num3);

  float media = (num1 + num2 + num3) / 3;

  printf("\x1b[35mA média aritmética dos números é %.2f\x1b[0m\n", media);


  return 0;
}