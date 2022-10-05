#include <stdio.h>

void main() {

    int vetor[10], i, j, org;

    // inserir os numeros a serem ordenados
    // include the numbers that will be ordered
    for(i = 0; i < 10; i++) {
        printf("Digite o valor que deseja guardar: ");
        scanf("%i", &vetor[i]);
    }

    // comparação dos numeros para ordenar do menor para o maior
    // comparison of numbers to order from smallest to largest
    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(vetor[j] < vetor[i]) {
                org = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = org;
            }
        }
    }

    // escrevendo os numeros no console
    // writing the numbers
    for (i = 0; i < 10; i++) {
         printf("\n%i", vetor[i]);
    }

    return 0;

}
