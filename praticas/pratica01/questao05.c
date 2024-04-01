/* 
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/

#include <stdio.h>
#include <math.h>
int main() {

float GB;
float bytes;

printf("Digite o valor em GB: ");
int deu_certo = scanf("%f", &GB);
bytes = GB * 1024 * 1024 * 1024;

  printf("O valor em bytes é %.0f\n", bytes);

  return 0;
  }