/*
 * PROGRAMA PARA CALCULAR FIBONACCI COM MEMOIZACAO
 *
 * Objetivo:
 * - Implementar o calculo da sequencia de Fibonacci usando memoizacao
 * - Evitar recalculos desnecessarios para melhor desempenho
 * - Demonstrar tecnica de programacao dinamica basica
 *
 * Funcionamento:
 * 1. Define um array global 'memo' para armazenar resultados calculados
 * 2. Implementa funcao recursiva que verifica primeiro o array de memoizacao
 * 3. Se o valor nao foi calculado ainda, calcula e armazena no array
 * 4. Caso contrario, retorna diretamente o valor armazenado
 * 5. A funcao principal inicializa o array e chama a funcao fibonacci
 *
 * Vantagens:
 * - Reduz complexidade de O(2^n) para O(n)
 * - Evita recalculos repetidos dos mesmos valores
 * - Consome mais memoria (O(n)) mas ganha em eficiencia
 *
 * Observacoes:
 * - Usa tipo long long para suportar numeros grandes
 * - Inicializa array com -1 para indicar valores nao calculados
 * - Inclui validacao para entrada do usuario
 *
 * Bibliotecas:
 * - stdio.h para entrada/saida
 * - stdlib.h para definicoes gerais
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

long long memo[MAX];

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    if (memo[n] != -1) {
        return memo[n];
    }
    
    memo[n] = fibonacci(n-1) + fibonacci(n-2);
    return memo[n];
}

int main() {
    int n;
    
    for (int i = 0; i < MAX; i++) {
        memo[i] = -1;
    }
    
    printf("Digite o valor de n para Fibonacci: ");
    scanf("%d", &n);
    
    if (n < 0 || n >= MAX) {
        printf("Valor invalido! Deve ser entre 0 e %d\n", MAX-1);
        return 1;
    }
    
    printf("Fibonacci(%d) = %lld\n", n, fibonacci(n));
    
    return 0;
}