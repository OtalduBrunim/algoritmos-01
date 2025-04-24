/*
 * PROGRAMA DE DECLARACAO DE VARIAVEIS
 *
 * Objetivo:
 * - Demonstrar declaracao de variaveis de tipos diferentes
 * - Mostrar uso basico de floats e chars em C
 *
 * Estrutura:
 * 1. Declara dois valores reais (float)
 * 2. Declara cinco variaveis do tipo char
 * 3. Atribui valores de exemplo as variaveis
 * 4. Exibe os valores armazenados
 *
 * Caracteristicas:
 * - Variaveis float para numeros com ponto decimal
 * - Variaveis char armazenam caracteres ASCII
 * - printf formatado:
 *   - %.2f para floats com 2 casas decimais
 *   - %c para exibicao de caracteres
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 */
#include <stdio.h>

int main() {
    float valor1, valor2;
    char char1, char2, char3, char4, char5; 

    valor1 = 3.14;
    valor2 = 2.71;
    char1 = 'A';
    char2 = 'B';
    char3 = 'C';
    char4 = 'D';
    char5 = 'E';

    printf("Valores reais:\n");
    printf("Valor 1: %.2f\n", valor1);
    printf("Valor 2: %.2f\n", valor2);

    printf("\nCaracteres:\n");
    printf("%c %c %c %c %c\n", char1, char2, char3, char4, char5);

    return 0;
}