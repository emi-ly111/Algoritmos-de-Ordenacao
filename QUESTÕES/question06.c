#include <stdio.h>
#include <stdlib.h>

// Função para fazer o heapify do vetor
void heapify(int vetor[], int n, int i) {
    int maior = i; // Inicializa o maior como raiz
    int esquerda = 2 * i + 1; // Índice do filho esquerdo
    int direita = 2 * i + 2; // Índice do filho direito

    // Se o filho esquerdo for maior que a raiz
    if (esquerda < n && vetor[esquerda] > vetor[maior])
        maior = esquerda;

    // Se o filho direito for maior que o maior até agora
    if (direita < n && vetor[direita] > vetor[maior])
        maior = direita;

    // Se o maior não for a raiz
    if (maior != i) {
        // Troca a raiz com o maior
        int temp = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = temp;

        // Recursivamente heapify a subárvore afetada
        heapify(vetor, n, maior);
    }
}

// Função para implementar o Heap Sort
void heapSort(int vetor[], int n) {
    // Constrói o heap (reorganiza o vetor)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(vetor, n, i);

    // Um a um, extrai os elementos do heap
    for (int i = n - 1; i > 0; i--) {
        // Move a raiz atual para o final
        int temp = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = temp;

        // Chama heapify na raiz reduzida
        heapify(vetor, i, 0);
    }
}

int main() {
    int i;
    int vetor[6]; // Declara um vetor para armazenar 6 números inteiros

    printf("METODO HEAP SORT\nInsira 6 numeros diferentes:\n");

    // Loop para ler os 6 números do usuário e armazená-los no vetor
    for (i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Chama a função de ordenamento para organizar os números no vetor
    heapSort(vetor, 6);

    // Exibe o vetor ordenado
    printf("\nVetor ordenado:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]); // Imprime cada elemento do vetor ordenado
    }
    printf("\n");
    
    return 0; // Indica que o programa terminou com sucesso             
}
