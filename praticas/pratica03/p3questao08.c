/*
8. Faça um programa em C que calcule o fatorial de um número inteiro.
*/

#include <stdio.h>
int main() {

  long int numero;
  long int fatorial = 1;

  printf("Entre com um número maior que 0: ");
  int deucerto = scanf("%li", &numero);

  if (deucerto && numero > 0) {
   // printf("%li! = ", numero);
    for (int i = numero; i > 1; i--) {
     // printf("%i * ", i);
      fatorial = fatorial * i;
    }
    // printf("1 = %li\n", fatorial);
    printf("%li! é igual a %li\n", numero, fatorial);
  } else {
    printf("Número inválido. Tente novamente\n");
  }

  return 0;
}