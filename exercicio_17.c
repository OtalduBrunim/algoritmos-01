/*
 * PROGRAMA PARA ORDENAR 5 NUMEROS INTEIROS
 *
 * Objetivo:
 * - Receber 5 numeros inteiros como entrada
 * - Ordena-los em ordem crescente
 * - Exibir o resultado ordenado
 *
 * Funcionamento:
 * 1. Declara um array de 5 posicoes para armazenar os numeros
 * 2. Usa um loop for para ler os 5 numeros via scanf()
 * 3. Chama a funcao ordenar() que implementa o algoritmo Bubble Sort
 * 4. A funcao ordenar() compara e troca os elementos adjacentes se necessario
 * 5. Exibe os numeros ordenados usando um loop for
 *
 * Algoritmo de Ordenacao:
 * - Bubble Sort (comparacao de pares adjacentes)
 * - Complexidade O(n^2) para o pior caso
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 */
#include <stdio.h>

void ordenar(int *array, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    ordenar(numeros, 5);

    printf("\nNumeros ordenados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}