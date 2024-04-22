/*
2. Faça um programa em C que leia dois números inteiros e imprima o quociente e
o resto da divisão entre eles.
*/

#include <stdio.h>

int main() {

  int num1, num2;

  printf("Insira o primeiro número: ");
  int deu_certo = scanf("%i", &num1);

  printf("Insira o segundo número: ");
  deu_certo = scanf("%i", &num2);

  float quociente = num1 / num2;
  float resto = num1 % num2;

  printf("\x1b[35mO quociente da divisão é %.2f e o resto é %.0f\x1b[0m\n",
         quociente, resto);

  return 0;
}