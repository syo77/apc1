#include <stdio.h>
int main() {

  int quantidade;

  printf("Entre com a quantidade de números a serem lidos: ");
  int deucerto = scanf("%i", &quantidade);

  if (deucerto && quantidade > 0) {
    int soma = 0;
    for (int i = 1; i <= quantidade; i++) {
      int numero;
      printf("Entre com o %iº número: ", i);
      deucerto = scanf("%i", &numero);
      if (deucerto) {
        soma = soma + numero;
      } else {
        printf("Número inválido. Tente novamente\n");
        getchar(); // serve para limpar o \n
        i--; // volta 1 repetição
      }
    }
    float media_aritmetica = soma * 1.0f / quantidade;
    printf("A média aritmética é %.1f\n", media_aritmetica);
  } else {
    printf("Quantidade inválida. Tente novamente\n");
  }

  return 0;
}