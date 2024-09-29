#include <stdio.h>
#include <stdlib.h>

// Função para ordenar um vetor usando o algoritmo Bubble Sort
void ordenamento(int vetor[]){
    int i, j, aux;

    // Loop externo: controla o número de passagens necessárias para ordenar o vetor
    for (i = 5; i > 0; i--) { // Começa em 5 (último índice) e vai até 1, para ordenar 6 elementos
        // Loop interno: compara elementos adjacentes do vetor
        for (j = 0; j < i; j++) {
            // Se o elemento atual for maior que o próximo, eles devem ser trocados
            if (vetor[j] > vetor[j + 1]) {
                // Troca de posição dos elementos
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){
    int i;
    int vetor[6]; // Declara um vetor para armazenar 6 números inteiros

    printf("METODO BUBBLE SORT\nInsira 6 numeros:\n");

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

