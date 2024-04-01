#include <stdio.h>
#include <math.h>

int main()
{
  int numero1;
  int numero2;

  printf("Entre com o valor numero1: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o valor numero2: ");
  deu_certo = scanf("%i", &numero2);

  // 0 < numero1 < 10
int maior_que_zero_menor_que_dez = (numero1 < 0 && numero1 < 10);
printf("O 1° número eh maior que 0 e menor que 10? %i\n", maior_que_zero_menor_que_dez);

  // 0 < numero1, numero1 > 10
int menor_que_zero_maior_que_dez = (numero1 < 0 || numero1 > 10);
  printf("O 1° número não eh maior que zero? %i\n", menor_que_zero_maior_que_dez);

  //negação
  int nao_eh_maior_que_zero = !(numero1 > 0);
  printf("O 1° número não eh maior que zero? %i\n", nao_eh_maior_que_zero);

  












// && = Esse é menor que esse E(&&) esse é menor q esse
  // || = Ou(||) esse é menor que esse OU esse é menor q esse
  // ! = Não(!) esse é menor que esse NÃO esse é menor q esse (Inverte o valor, se for falso vira positivo e vice versa)
  


  


  return 0;
}