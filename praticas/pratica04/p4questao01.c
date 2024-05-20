/*
1. Faça um programa em C que preencha uma matriz de 10 números, depois leia um número e localize a posição dele na matriz.
*/



#include <stdio.h>
#define LIMITE 10
int main() {

  int numeros[LIMITE];

  for(int i=0; i<10; i++) {
    printf("Entre com o %iº número: ", i+1);
    int deucerto = scanf("%i", &numeros[i]);  
  }

  int numero;
  printf("Entre com o número a ser procurado: ");
  int deucerto = scanf("%i", &numero);
  int achei = -1;

  for(int i=0; i<LIMITE; i++) {
if (numero == numeros[i]) {
  achei = i;
  break;
  }
}

  if (achei < 0) {
    printf("Número %i não foi encontrado!\n", numero);
  } else {
    printf("Achei o número %i na posição %i\n", numero, achei+1);
  }


  return 0;
}