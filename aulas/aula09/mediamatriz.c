#include <stdio.h>
int main() {

  int numeros[10];
  int soma = 0;

  for (int i = 0; i < 10; i++) {
    printf("Entre com o %iº numero: ", i + 1);
    int deucerto = scanf("%i", &numeros[i]);
    soma = soma + numeros[i];
  }

  float media = soma / 10.0f;

  for (int i = 0; i < 9; i++) {
    printf("%i + ", numeros[i]);
  }
  printf("%i = %.1f\n", numeros[9], media);

  return 0;
}