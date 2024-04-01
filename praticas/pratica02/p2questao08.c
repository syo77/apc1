/*
8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
*/

#include <stdio.h>
#include <math.h>

int main()
{
double x1, y1, x2, y2, distancia, quadrado1, quadrado2;

printf("Insira o valor de x1: ");
  int deu_certo = scanf("%lf", &x1);

  printf("Insira o valor de y1: ");
  deu_certo = scanf("%lf", &y1);
  
printf("Insira o valor de x2: ");
  deu_certo = scanf("%lf", &x2);

  printf("Insira o valor de y2: ");
  deu_certo = scanf("%lf", &y2);


  quadrado1 = (x2 - x1) * (x2 - x1);
  quadrado2 = (y2 - y1) * (y2 - y1);
  
  distancia = sqrt(quadrado1 + quadrado2);

  printf("\x1b[35mA distância entre os pontos é %lf.\x1b[0m\n", distancia);
  


  

  return 0;
  
}