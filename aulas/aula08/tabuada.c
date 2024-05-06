#include <stdio.h>
int main() {

  int numero;

  printf("Entre com um número de 1 a 10: ");
  int deucerto = scanf("%i", &numero);

  if (deucerto && numero > 0 && numero < 11) {
    for (int i = 1; i <= 10; i++) {
      printf("A tabuada do %i\n", numero);
      printf("%i x %i = %i\n", i, numero, i * numero);
    }
    for (int i = 10; i > 0; i--){
      printf("A tabuada invertida do %i\n", numero);
      printf("%i x %i = %i\n", i, numero, i * numero);
      }
  } else {
    printf("Numero inválido. Tente novamente\n");
  }

  return 0;
}