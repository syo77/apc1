/*
7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
  */

#include <stdio.h>
#include <math.h>

int main()
{
float distancia;
  float angulo;
  float seno;
  float altura_alcancada;
float alfa;

  printf("Digite a distância percorrida: ");
  int deu_certo = scanf("%f", &distancia);

  printf("Digite o ângulo de inclinação do avião (menor ou igual a 45°): ");
  deu_certo = scanf("%f", &angulo);

  alfa = angulo * (M_PI / 180.0);
  seno = sin(alfa);

  altura_alcancada = distancia * seno;
  printf("\x1b[31mA altura alcançada foi de %.2f metros\x1b[0m\n", altura_alcancada);
  
  return 0;
  
}