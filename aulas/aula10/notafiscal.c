#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {

  enum unidade_medida_e {
    peso,   // 0
    caixa,  // 1
    unidade // 2
  };

  struct item_nota_fiscal_t {
    char nome[21];
    int quantidade;
    int unidade;
    float valor;
    float preco;
  };

  struct item_nota_fiscal_t item[5];
  float total = 0.0f;

  for (int i = 0; i < 5; i++) {
    printf("Entre com o nome do produto: ");
    int deucerto = scanf("%[^\n]s", item[i].nome);
    while (getchar() != '\n');
    int tamanho = strlen(item[i].nome);
    for (int j = 0; j < tamanho; j++) {
      item[i].nome[j] = toupper(item[i].nome[j]);
    }

    printf("Entre com a quantidade de produto: ");
    deucerto = scanf("%i", &item[i].quantidade);
    while (getchar() != '\n');

    printf("Entre com a unidade do produto, 0 - Peso, 1 - Caixa, 2 - Unidade: ");
    deucerto = scanf("%i", &item[i].unidade);
    while (getchar() != '\n');

      printf("Entre com o preço do produto: ");
    deucerto = scanf("%f", &item[i].preco);
    while (getchar() != '\n');

    item[i].valor = item[i].quantidade * item[i].preco;
    total = total + item[i].valor;
  }

  printf("\n N O T A   F I S C A L\n");
  printf("Item              Qtd Und Preço Valor\n");
  for (int i = 0; i < 5; i++) {
    printf("%-18.18s%03i", item[i].nome, item[i].quantidade);
    switch (item[i].unidade) {
    case caixa:
      printf("%3s", "CX");
      break;
    case peso:
      printf("%3s", "KG");
      break;
    case unidade:
      printf("%3s", "UN");
      break;
    }

    printf("%6.2f%6.2f\n", item[i].preco, item[i].valor);
  }

  printf("--------------------------------------\n");
  printf("Total......................: %7.2f\n", total);

  return 0;
}