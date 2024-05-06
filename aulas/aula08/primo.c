#include <stdio.h>
int main(){
  int numero;
  int qtde_multiplos = 0;

  printf("Entre com um número > 0: ");
  int deucerto = scanf("%i", &numero);

  if(deucerto && numero > 0) {
    for(int i = 1; i <= numero; i++) {
      if(numero % i == 0) {
        qtde_multiplos++;
      }
    }
    if (qtde_multiplos == 2) {
      printf("O número %i é primo!\n", numero);
    } else {
      printf("O número %i não é primo\n", numero);
    }
  } else {
    printf("Número inválido. Tente novamente\n");
  }
  

  return 0;
}