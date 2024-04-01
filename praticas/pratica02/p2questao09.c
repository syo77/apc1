/*
9. Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.
*/

#include <stdio.h>

int main() {
    int numero;

    // Solicitar que o usuário insira um número inteiro
    printf("Digite um número inteiro: ");
   int deu_certo = scanf("%d", &numero);

    // Exibir o caractere correspondente na tabela ASCII
    printf("O caractere correspondente na tabela ASCII para o número %d é '%c'\n", numero, numero);

    return 0;
}