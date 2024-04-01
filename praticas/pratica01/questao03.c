/* 
3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() {
int raio;
float PI = 3.1416;

printf("Digite o raio a pizza: ");
int deu_certo = scanf("%i", &raio);

float perimetro = 2 * PI * raio;
printf("O perimetro da pizza é %.f cm\n", perimetro);

  return 0;
}
