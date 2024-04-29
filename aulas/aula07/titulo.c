#include <stdio.h>
int main() {

  int idade;
  printf("Entre com a sua idade: ");
int deucerto = scanf("%i", &idade);

  if(deucerto) {
  if (idade < 16) {
    printf("Ainda não pode votar!\n");
  } else if (idade >= 18 && idade <= 70) {
    printf("O voto é obrigatório!\n");
  } else {
    printf("O voto é opcional!\n");
  }
    }
  else {
    printf("Idade inválida. Tente novamente!\n");
  }




  return 0;
}