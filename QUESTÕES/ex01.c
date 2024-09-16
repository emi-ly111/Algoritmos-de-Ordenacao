#include <stdio.h>
#include <stdlib.h>

void ordenamento(int vetor[]){
    int i, j, aux = 0; //aux = auxiliar, que vai ajudar a fazer a troca

for (i = 6; i > 0; i--) {
        for (j = 0; i < 6; i++) {
            if (vetor[j] > vetor[j + 1]) { //se o numero da posicao atual (i) for maior que o numero da posicao seguinte (i+1), entao:
                aux = vetor[j]; //aux recebe este numero;
                vetor[j] = vetor[j + 1]; //o numero da posicao seguinte passa para a posicao atual;
                vetor[j + 1] = aux; 
            }
        }
    }
}

int main(){

    int i = 0;
    int vetor[6] = {0};

    printf("METODO BUBBLE SORT\nInsira 6 numeros:\n");

    for (i = 0; i < 6; i++) { //laço que coloca os numeros dentro do vetor
       scanf("%d", &vetor[i]);
    }
    
    ordenamento(vetor); /*chamando a função para ordenar os 
                        numeros e passando o vetor como parametro*/
    return 0;             
}