#include <stdio.h>
int main() {

  int opcao;
  float saldo = 10;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Recarregar saldo\n");
  printf("3 - Ligações recebidas\n");
  printf("4 - ligações efetuadas\n");
  printf("0 - Sair\n");
  printf("Entre com uma opção: ");
  int deucerto = scanf("%i", &opcao);

  switch (opcao) {
  case 1:
    printf("Seu saldo é de R$10.00\n");
    break;
  case 2: {
    float valor;
    printf("Insira o valor da recarga: ");
    int deucerto = scanf("%f", &valor);
    float saldo_total = saldo + valor;
    printf("Recarga efetuada!. Seu saldo agora é de R$%.2f\n", saldo_total);
    break;
  }
  case 3: {
    printf("As 5 últimas ligações recebidas:\n");
    printf("91111-1110\n");
    printf("91111-1112\n");
    printf("91111-1113\n");
    printf("91111-1114\n");
    printf("91111-1115\n");
    break;
  }
  case 4: {
    printf("As 5 últimas ligações efetuadas:\n");
    printf("92222-2220\n");
    printf("92222-2221\n");
    printf("92222-2223\n");
    printf("92222-2224\n");
    printf("92222-2225\n");
    break;
  }
  case 0:
    printf("Até logo!\n");
    break;
  default:
    printf("Incorreto. Insira um valor indicado no menu\n");
  }

  return 0;
}