#include <stdio.h>
#include <stdlib.h>

// Função para implementar o Shell Sort
void shellSort(int vetor[], int n) {
    // Começa com um grande intervalo e vai reduzindo
    for (int intervalo = n / 2; intervalo > 0; intervalo /= 2) {
        // Realiza uma inserção sort para o intervalo
        for (int i = intervalo; i < n; i++) {
            int temp = vetor[i]; // Armazena o valor atual
            int j;

            // Move os elementos do vetor que estão em intervalo
            // maior que temp para uma posição à frente
            for (j = i; j >= intervalo && vetor[j - intervalo] > temp; j -= intervalo) {
                vetor[j] = vetor[j - intervalo];
            }
            vetor[j] = temp; // Insere o valor armazenado na posição correta
        }
    }
}

int main() {
    int i;
    int vetor[6]; // Declara um vetor para armazenar 6 números inteiros

    printf("METODO SHELL SORT\nInsira 6 numeros diferentes:\n");

    // Loop para ler os 6 números do usuário e armazená-los no vetor
    for (i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Chama a função de ordenamento para organizar os números no vetor
    shellSort(vetor, 6);

    // Exibe o vetor ordenado
    printf("\nVetor ordenado:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]); // Imprime cada elemento do vetor ordenado
    }
    printf("\n");
    
    return 0; // Indica que o programa terminou com sucesso             
}
