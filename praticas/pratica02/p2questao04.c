/*
4. Faça um programa em C que leia a largura e o comprimento de um terreno em
metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
*/

#include <stdio.h>
int main() {
  float largura, comprimento, area;
  float hectare, metro_quadrado;

  printf("Insira a largura do terreno: ");
  int deu_certo = scanf("%f", &largura);

  printf("Insira o comprimento do terreno: ");
  deu_certo = scanf("%f", &comprimento);

  area = (largura * comprimento);
  metro_quadrado = area * 1000;

  printf("\x1b[35mA área do terreno é %.2f hectares ou %.2f m²\x1b[0m\n", area,
         metro_quadrado);

  return 0;
}