#include <stdio.h>
#include <stdlib.h> // biblioteca de sistema (traz o comando "sistem" por exemplo)

int main() {
  int opcao = -1; //colocar qualquer coisa diferente de zero

  while (opcao != 0) {
    int deucerto = system("clear");
    printf("** MEU JOGO **\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Ver pontuação\n");
    printf("3 - Ajuda\n");
    printf("0 - Sair\n");
    printf("Entre com uma opção: ");
    deucerto = scanf("%i", &opcao);
    while (getchar() != '\n'); // limpa o buffer

    switch(opcao) {
      case 1: { break; }
      case 2: { 
        deucerto = system("clear");
        printf("Nome\tPontuação\n");
        printf("Yuri 1\t2000\n");
        printf("Yuri 2\t1000\n");
        printf("Yuri 3\t900\n");
        printf("Pressione ENTER para continuar: ");
        getchar();
        break; }
      case 3: { break; }
      case 0: printf("\nJogo encerrado!\n"); break;
      default: printf("Opção inválida. Tecle ENTER para continuar\n");
      getchar ();
    }
  }

  



  

  
  return 0;
}