/*
8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/

#include <stdio.h>

int main()
{

  // Declaração de variáveis
  int segundos;
  int min;
  int h;
  int seg;

  // Entrada de dados
  printf("Digite o tempo em segundos: ");
  int deu_certo = scanf("%i", &segundos);

// Processamento de dados
  h = segundos / 3600;
  min = segundos / 60;
  seg = segundos % 60;

  // Saída de dados
  printf("%i segundos corresponde a %i horas, %i minutos e %i segundos\n", segundos, h, min, seg);
  

  return 0;
}