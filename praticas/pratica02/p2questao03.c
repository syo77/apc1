/*
3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o
valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
*/

#include <stdio.h>
int main() {
  float celsius, fahrenheit;

  printf("Digite a temperatura em graus Celsius: ");
  int deu_certo = scanf("%f", &celsius);

  fahrenheit = ((celsius * 1.8) + 32);

  printf("\x1b[35mA temperatura em graus Fahrenheit é %.1f\x1b[0m\n",
         fahrenheit);

  return 0;
}