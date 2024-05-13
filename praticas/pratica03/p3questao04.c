/*
4. Faça um programa em C que leia uma tecla pressionada e determine se ela é uma
letra, um dígito ou um caractere especial.
*/
#include <stdio.h>
int main() {

  char tecla;

  printf("Insira uma tecla do teclado: ");
  int deucerto = scanf("%c", &tecla);

  if (deucerto) {
    if ((tecla >= 'a' && tecla <= 'z') || (tecla >= 'A' && tecla <= 'Z')) {
      printf("A tecla '%c' é uma letra!\n", tecla);
    } else if (tecla >= '0' && tecla <= '9') {
      printf("A tecla '%c' é um dígito!\n", tecla);
    } else {
      printf("A tecla '%c' é um caractere especial!\n", tecla);
    }
  }
  return 0;
}