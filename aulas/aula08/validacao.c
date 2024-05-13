#include <stdio.h>
int main() {

  int numero;
  int numerotrue = 0;

  while (numerotrue == 0) {
    printf("Entre com um numero entre 1 e 10: ");
    int deucerto = scanf("%i", &numero);

    numerotrue = deucerto && numero >= 1 && numero <= 10;

    if (numerotrue == 0) {
      printf("Algo deu errado!\n");
      getchar(); //limpar o buffer (remove o \n da memória);
    }
  }

    printf("Numero válido!\n");

  return 0;
}


// while testa a condição no começo;
//do...while testa a condição no final;