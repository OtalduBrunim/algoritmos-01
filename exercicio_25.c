/*
 * PROGRAMA PARA VALIDAR NUMEROS DE UM SORTEIO
 *
 * Objetivo:
 * - Receber 6 numeros de um possivel sorteio
 * - Verificar se estao dentro do intervalo valido (1-60)
 * - Verificar se ha numeros repetidos
 * - Exibir os numeros validos ou mensagens de erro
 *
 * Funcionamento:
 * 1. Define constantes para quantidade de numeros e intervalo valido
 * 2. Implementa funcao para verificar numeros repetidos
 * 3. Implementa funcao para verificar intervalo valido
 * 4. A funcao principal:
 *    - Solicita os 6 numeros ao usuario
 *    - Valida se nao ha repeticao
 *    - Valida se estao no intervalo correto
 *    - Exibe os numeros ou mensagens de erro
 *
 * Validacoes:
 * - Nenhum numero pode se repetir
 * - Todos devem estar entre 1 e 60
 * - Quantidade fixa de 6 numeros
 *
 * Bibliotecas:
 * - stdio.h para entrada/saida
 * - stdbool.h para uso do tipo bool
 */
#include <stdio.h>
#include <stdbool.h>

#define QUANTIDADE_NUMEROS 6
#define MIN_NUMERO 1
#define MAX_NUMERO 60

bool verificaRepetidos(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (numeros[i] == numeros[j]) {
                return true; // Número repetido encontrado
            }
        }
    }
    return false;
}

bool verificaIntervalo(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] < MIN_NUMERO || numeros[i] > MAX_NUMERO) {
            return false; // Número fora do intervalo
        }
    }
    return true;
}

int main() {
    int numeros[QUANTIDADE_NUMEROS];
    
    printf("Digite os %d numeros do sorteio (entre %d e %d):\n", 
           QUANTIDADE_NUMEROS, MIN_NUMERO, MAX_NUMERO);
    
    for (int i = 0; i < QUANTIDADE_NUMEROS; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    if (verificaRepetidos(numeros, QUANTIDADE_NUMEROS)) {
        printf("\nErro: Voce digitou numeros repetidos.\n");
        return 1;
    }
    
    if (!verificaIntervalo(numeros, QUANTIDADE_NUMEROS)) {
        printf("\nErro: Todos os numeros devem estar entre %d e %d.\n", 
               MIN_NUMERO, MAX_NUMERO);
        return 1;
    }
    
    printf("\nNumeros validos para o sorteio:\n");
    for (int i = 0; i < QUANTIDADE_NUMEROS; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    return 0;
}