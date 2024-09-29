#include <stdio.h>
#include <stdlib.h>

// Função para ordenar um vetor usando o algoritmo Insertion Sort
void ordenamento(int vetor[]) {
    int i, j, chave;

    // Loop para percorrer os elementos do vetor, começando do segundo
    for (i = 1; i < 6; i++) {
        chave = vetor[i]; // O elemento atual a ser inserido na parte ordenada
        j = i - 1;

        // Move os elementos da parte ordenada que são maiores que a chave
        // para uma posição à frente
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        // Insere a chave na posição correta
        vetor[j + 1] = chave;
    }
}

int main() {
    int i;
    int vetor[6]; // Declara um vetor para armazenar 6 números inteiros

    printf("METODO INSERTION SORT\nInsira 6 numeros diferentes:\n");

    // Loop para ler os 6 números do usuário e armazená-los no vetor
    for (i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Chama a função de ordenamento para organizar os números no vetor
    ordenamento(vetor);

    // Exibe o vetor ordenado
    printf("\nVetor ordenado:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]); // Imprime cada elemento do vetor ordenado
    }
    printf("\n");
    
    return 0; // Indica que o programa terminou com sucesso             
}
