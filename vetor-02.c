#include <stdio.h>

void main() {

    /* Receba dois valores de 10 posições de inteiros e depois mostre quais numeros
    estão presentes nos dois vetores */

    int vet1[10], vet2[10], i, j;

    for(i = 0; i < 10; i++) {

        printf("Digite um numero para ser guardado: ");
        scanf("%i", &vet1[i]);

    }

    for(i = 0; i < 10; i++) {

        printf("Digite mais numeros para serem guardados: ");
        scanf("%i", &vet2[i]);

    }

    for(i = 0; i < 10; i++) {

        for(j = 0; j < 10; j++) {

            if(vet1[i] == vet2[j]) {
                printf("O valor de %i se encontra na posicao %i do vetor 1 e %i do vetor 2", vet1[i], i, j);
            }

        }

    }
}
