#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para ordenar o vetor usando Selection Sort
void ordenamento(int vetor[]) {
    int i, j, minIndex, aux;

    // Loop para percorrer todo o vetor
    for (i = 0; i < 6 - 1; i++) {
        // Assume que o primeiro elemento não ordenado é o menor
        minIndex = i;

        // Loop para encontrar o menor elemento na parte não ordenada
        for (j = i + 1; j < 6; j++) {
            if (vetor[j] < vetor[minIndex]) {
                minIndex = j; // Atualiza o índice do menor elemento
            }
        }

        // Troca o menor elemento encontrado com o primeiro elemento não ordenado
        if (minIndex != i) {
            aux = vetor[i];
            vetor[i] = vetor[minIndex];
            vetor[minIndex] = aux;
        }
    }
}

int main() {
    int vetor[6];
    int i;

    // Recebe 6 valores aleatórios e diferentes
    printf("METODO SELECT SORT\nInsira 6 numeros: ");
    for (i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chama a função para ordenar o vetor
    ordenamento(vetor);

    // Exibe o vetor ordenado
    printf("\nVetor ordenado:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
