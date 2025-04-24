/*
 * ALGORITMO DE SOMA DE DOIS NUMEROS INTEIROS
 * 
 * Descriçao:
 * Este programa recebe dois numeros inteiros como entrada, calcula a soma
 * e exibe o resultado na saida padrao.
 * 
 * Funcionamento:
 * 1. Declara tres variaveis do tipo int:
 *    - num1: armazena o primeiro valor
 *    - num2: armazena o segundo valor
 *    - resultado: armazena a soma
 * 2. Solicita e le os valores de entrada usando printf() e scanf()
 * 3. Realiza a operação de soma (num1 + num2)
 * 4. Exibe o resultado formatado
 * 
 * Bibliotecas utilizadas:
 * - stdio.h: para funçoes de entrada/saida */
#include <stdio.h>

int main() {
    int num1, num2, resultado;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    resultado = num1 + num2;
    
    printf("A soma de %d e %d eh igual a %d\n", num1, num2, resultado);
    
    return 0;
}