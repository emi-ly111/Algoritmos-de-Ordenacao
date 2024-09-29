#include <stdio.h>
#include <stdlib.h>

// Função para mesclar dois subvetores
void merge(int vetor[], int esquerda, int meio, int direita) {
    int i, j, k;
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    // Cria os subvetores temporários
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    // Copia os dados para os subvetores L e R
    for (i = 0; i < n1; i++)
        L[i] = vetor[esquerda + i];
    for (j = 0; j < n2; j++)
        R[j] = vetor[meio + 1 + j];

    // Mescla os subvetores de volta ao vetor original
    i = 0; // Índice inicial do primeiro subvetor
    j = 0; // Índice inicial do segundo subvetor
    k = esquerda; // Índice inicial do vetor mesclado

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vetor[k] = L[i];
            i++;
        } else {
            vetor[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L, se houver
    while (i < n1) {
        vetor[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R, se houver
    while (j < n2) {
        vetor[k] = R[j];
        j++;
        k++;
    }

    // Libera a memória dos subvetores temporários
    free(L);
    free(R);
}

// Função para implementar o Merge Sort
void mergeSort(int vetor[], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Ordena as duas metades
        mergeSort(vetor, esquerda, meio);
        mergeSort(vetor, meio + 1, direita);

        // Mescla as metades ordenadas
        merge(vetor, esquerda, meio, direita);
    }
}

int main() {
    int i;
    int vetor[6]; // Declara um vetor para armazenar 6 números inteiros

    printf("METODO MERGE SORT\nInsira 6 numeros diferentes:\n");

    // Loop para ler os 6 números do usuário e armazená-los no vetor
    for (i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Chama a função de ordenamento para organizar os números no vetor
    mergeSort(vetor, 0, 5);

    // Exibe o vetor ordenado
    printf("\nVetor ordenado:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]); // Imprime cada elemento do vetor ordenado
    }
    printf("\n");
    
    return 0; // Indica que o programa terminou com sucesso             
}
