#include <stdio.h>
#include <stdlib.h>

// Função para particionar o vetor
int partition(int vetor[], int baixo, int alto) {
    int pivo = vetor[alto]; // Escolhe o último elemento como pivô
    int i = (baixo - 1); // Índice do menor elemento

    for (int j = baixo; j < alto; j++) {
        // Se o elemento atual for menor ou igual ao pivô
        if (vetor[j] <= pivo) {
            i++; // Incrementa o índice do menor elemento
            // Troca os elementos
            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
    }
    // Troca o pivô com o elemento em i+1
    int temp = vetor[i + 1];
    vetor[i + 1] = vetor[alto];
    vetor[alto] = temp;
    return i + 1; // Retorna o índice do pivô
}

// Função para implementar o Quick Sort
void quickSort(int vetor[], int baixo, int alto) {
    if (baixo < alto) {
        // Particiona o vetor
        int pivoIndex = partition(vetor, baixo, alto);

        // Ordena as duas metades
        quickSort(vetor, baixo, pivoIndex - 1);
        quickSort(vetor, pivoIndex + 1, alto);
    }
}

int main() {
    int i;
    int vetor[6]; // Declara um vetor para armazenar 6 números inteiros

    printf("METODO QUICK SORT\nInsira 6 numeros diferentes:\n");

    // Loop para ler os 6 números do usuário e armazená-los no vetor
    for (i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Chama a função de ordenamento para organizar os números no vetor
    quickSort(vetor, 0, 5);

    // Exibe o vetor ordenado
    printf("\nVetor ordenado:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]); // Imprime cada elemento do vetor ordenado
    }
    printf("\n");
    
    return 0; // Indica que o programa terminou com sucesso             
}
