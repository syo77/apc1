#include <stdio.h>
#include <string.h>
int main() {

  char nome[20];

  printf("Entre com seu nome: ");
  int deucerto = scanf("%[^\n]s", nome);
  // [^\n] serve para ele ler tudo até achar o "\n";

  printf("Olá %s!\n", nome);

  char mensagem[30];
strcpy(mensagem, "Olá Mundo!"); // strcpy == copy, propriedade da biblioteca string.h adicionada ele pega o que está escrito e copia;
  printf("%s\n", mensagem);
  strcat(mensagem, " blz?"); // strcat == pegar, ele pega o primeiro da strcpy e junta com a "mensagem" dele;
  printf("%s\n", mensagem);
int tamanho = strlen(mensagem); // indica o tamanho da string;
  printf("O tamanho da mensagem é %i caracteres\n", tamanho);
  printf("As strings nome e mensagem são iguais? %i\n", strcmp(nome, mensagem));



// strcmp == comparar se as stings são iguais;



  return 0;
}