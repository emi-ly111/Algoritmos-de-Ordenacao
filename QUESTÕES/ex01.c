#include <stdio.h>
#include <stdlib.h>

void ordenamento(int vetor[]){
    int i, j, aux;

    // Laço externo para controlar as passagens do Bubble Sort
    for (i = 5; i > 0; i--) { // Deve começar em 5 (último índice) e ir até 1, pois está ordenando 6 elementos
        for (j = 0; j < i; j++) { // Laço interno para comparar os elementos
            if (vetor[j] > vetor[j + 1]) { // Se o elemento atual for maior que o próximo
                // Troca os elementos de posição
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){
    int i;
    int vetor[6];

    printf("METODO BUBBLE SORT\nInsira 6 numeros:\n");

    // Laço para inserir os números no vetor
    for (i = 0; i < 6; i++) {
       scanf("%d", &vetor[i]);
    }
    
    // Chamada da função para ordenar os números no vetor
    ordenamento(vetor);

    // Exibir o vetor ordenado
    printf("\nVetor ordenado:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;             
}
