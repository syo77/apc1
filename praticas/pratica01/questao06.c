/*
6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através
da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, raiz_delta, x1, x2;

    // Entrada dos coeficientes a, b e c
    printf("Digite o coeficiente a: ");
    int deu_certo = scanf("%f", &a);

  printf("Digite o coeficiente b: ");
  deu_certo = scanf("%f", &b);

  printf("Digite o coeficiente c: ");
  deu_certo = scanf("%f", &c);
  
  // Cálculo do delta
    delta = b * b - 4 * a * c;

    // Verificação do valor do delta para determinar o tipo de raízes
    if (delta > 0) {
        raiz_delta = sqrt(delta);
        x1 = (-b + raiz_delta) / (2 * a);
        x2 = (-b - raiz_delta) / (2 * a);
        printf("As raízes da equação são: %.2f e %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equação possui uma raiz real: %.2f\n", x1);
    } else {
        float parte_real = -b / (2 * a);
        float parte_imaginaria = sqrt(-delta) / (2 * a);
        printf("As raízes da equação são números complexos: %.2f + %.2fi e %.2f - %.2fi\n", parte_real, parte_imaginaria, parte_real, parte_imaginaria);
    }

    return 0;
}