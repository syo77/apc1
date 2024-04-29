#include <stdio.h>
int main(){

  int avaliacao;

  printf("Entre com a avaliação do motorista entre 1 e 5: ");
  int deucerto = scanf("%i", &avaliacao);

switch (avaliacao) {
  case 1: printf("O motorista ganhou *\n"); break;
  case 2: printf("O motorista ganhou **\n"); break;
  case 3: printf("O motorista ganhou ***\n"); break;
  case 4: printf("O motorista ganhou ****\n"); break;
  case 5: printf("O motorista ganhou *****\n"); break;
default: printf("Avaliação inválida. Tente novamente\n");
} 
  



  
/*
  if (avaliacao == 1) {
    printf("O motorista ganhou *\n");
  } else if (avaliacao == 2) {
    printf("O motorista ganhou **\n");
  } else if (avaliacao == 3) {
    printf("O motorista ganhou ***\n");
  } else if (avaliacao == 4) {
    printf("O motorista ganhou ****\n");
  } else if (avaliacao == 5) {
    printf ("O motorista ganhou *****\n");
  } else {
    printf ("Avaliação inválida. Tente novamente!\n");
  }
  */
  
  return 0;
}