#include <stdio.h>

void main() {
    /* Faça um programa que recebe um vetor de 100 posições de inteiros
    depois receba um valor inteiro e pesquise-o no vetor caso seja encontrado, mostr as
    posições onde está. */

    int vet[100], numero, i, tamanho;

    numero = 0;
    tamanho = 100;

    for (i = 0; i < tamanho; i++) {

        printf("Digite numeros que deseja guardar: ");
        scanf("%i", &vet[i]);
    }

    printf("Escreva o numero buscado: ");
    scanf("%i", &numero);

    for (i = 0; i < tamanho; i++) {

        if(numero == vet[i]) {
            i = i + 1;
            printf("O numero procurado esta na posicao: %i", i);
        }
    }

}
