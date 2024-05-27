/*
2. Faça um programa em C que leia as notas de 10 alunos, **calcule a média da turma** e contabilize quantos alunos estão com a nota acima da média.
*/

#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0.0;
    float mediae = 5;
  float mediat;
    int acima_da_media = 0;

  
    for (int i = 0; i < 10; i++) {
        printf("Digite a média do aluno %d: ", i + 1);
     int deucerto = scanf("%f", &notas[i]);
        soma += notas[i];
    }

    
    mediat = soma / 10;

    
    for (int i = 0; i < 10; i++) {
        if (notas[i] >= mediae) {
            acima_da_media++;
        }
    }

    
    printf("A média da turma é: %.2f\n", mediat);
    printf("Número de alunos com nota acima da média: %d\n", acima_da_media);

    return 0;
}