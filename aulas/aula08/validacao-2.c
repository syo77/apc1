#include <stdio.h>
int main() {

  int numero;
  int numerotrue = 0;

  do {
    printf("Entre com um número de 1 a 10: ");
    int deucerto = scanf("%i", &numero);

    numerotrue = deucerto && numero >= 1 && numero <= 10;

    if (numerotrue == 0) {
      printf("Algo deu errado!\n");
      getchar();
    }
  } while (numerotrue == 0);
  
  printf("Deu certo!\n");
  
  return 0;
}