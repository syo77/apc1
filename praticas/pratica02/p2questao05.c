/*
5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o
índice de massa corporal (imc = peso / altura²).
*/
#include <stdio.h>

int main() {
  float imc, peso, altura;

  printf("Digite a peso da pessoa: ");
  int deu_certo = scanf("%f", &peso);

  printf("Digite a altura da pessoa (em metros): ");
  deu_certo = scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("\x1b[35mO imc da pessoa é %f. \x1b[0m\n", imc);

  return 0;
}