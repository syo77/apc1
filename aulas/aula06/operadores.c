#include <math.h>
#include <stdio.h>

int main() {

  int numero1;
  int numero2;
  const double PI = 3.14;

  printf("Entre com o valor numero1: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o valor numero2: ");
  deu_certo = scanf("%i", &numero2);

  int resultado = numero1 + numero2;
  printf("A soma dos numeros eh %i\n", resultado);

  resultado = numero1 - numero2;
  printf("A subtração dos numeros eh %i\n", resultado);

  resultado = numero1 * numero2;
  printf("A multiplicação dos numeros eh %i\n", resultado);

  resultado = numero1 / numero2;
  printf("A divisão inteira dos numeros eh %i\n", resultado);

  float resultado2 =
      numero1 /
      (numero2 * 1.0); // conversão implícita (como se fosse multiplicar por X
                       // aí converte todo mundo pra float)
  printf("A divisão dos numeros eh %.1f\n", resultado2);

  resultado = numero1 % numero2;
  printf("O resto da divisão dos números eh %i\n", resultado);

  // numero1 = numero1 + 1;
  // numero1++;
  //++numero1;

  printf("O incremento do numero1 eh %i\n", numero1++);
  printf("O incremento do numero1 eh %i\n", ++numero1);

  // numero1 = numero1 - 1;
  // numero1 = numero1--;
  // --numero1;

  printf("O decremento do numero1 eh %i\n", numero1--);
  printf("O decremento do numero1 eh %i\n", --numero1);

  // -----------------------------------------------------

  double raiz = sqrt(numero1);
  printf("A raiz quadrada do numero1 eh %.2f\n", raiz);

  double potencia = pow(numero1, 3); // numero1^3
  printf("A potencia do numero1 eh %.2f\n", potencia);

  double logaritmo = log2(numero1); // log na base 2 se for so log é base 10
  printf("O log2 do numero1 eh %.2f\n", logaritmo);

  double seno = sin(numero1 * (PI / 180));
  printf("O seno do numero1 eh %.2f\n", seno);

  return 0;
}