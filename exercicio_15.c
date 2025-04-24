/*
 * PROGRAMA PARA SOMA E MEDIA DE 3 NUMEROS INTEIROS
 *
 * Objetivo:
 * - Receber tres numeros inteiros como entrada
 * - Calcular a soma dos tres numeros
 * - Calcular a media aritmetica
 * - Exibir os resultados
 *
 * Funcionamento:
 * 1. Declara tres variaveis int para os numeros
 * 2. Declara uma variavel int para a soma
 * 3. Declara uma variavel float para a media
 * 4. Usa scanf() para ler os tres valores
 * 5. Calcula a soma (num1 + num2 + num3)
 * 6. Calcula a media (soma / 3.0)
 *    - O 3.0 força conversao para float
 * 7. Exibe a soma (como int) e media (com 2 decimais)
 *
 * Observacoes:
 * - Usa divisao por 3.0 para resultado preciso
 * - Formata a media com 2 casas decimais (%.2f)
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 */
#include <stdio.h>

int main() {
    int num1, num2, num3;
    int soma;
    float media;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    media = soma / 3.0;

    printf("\nSoma: %d\n", soma);
    printf("Media: %.2f\n", media);

    return 0;
}