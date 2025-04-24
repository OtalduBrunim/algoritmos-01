/*
 * PROGRAMA PARA ORDENAR 3 CARACTERES EM ORDEM ALFABETICA
 *
 * Objetivo:
 * - Receber 3 caracteres como entrada do usuario
 * - Ordena-los em ordem alfabetica
 * - Exibir o resultado ordenado
 *
 * Funcionamento:
 * 1. Usa uma funcao de ordenacao que realiza 3 comparacoes/trocas:
 *    - Primeiro ordena os dois primeiros caracteres
 *    - Depois ordena os dois ultimos caracteres
 *    - Finalmente verifica novamente os dois primeiros
 * 2. A funcao principal trata a entrada/saida:
 *    - Le os 3 caracteres com scanf()
 *    - Chama a funcao de ordenacao com ponteiros
 *    - Imprime os caracteres ordenados
 *
 * Caracteristicas:
 * - Diferenciacao entre maiusculas/minusculas (maiusculas vem primeiro)
 * - Ordenacao eficiente com apenas 3 comparacoes
 * - Usa parametros por ponteiro para ordenacao in-place
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 */
#include <stdio.h>

void sortThreeChars(char *a, char *b, char *c) {
    char temp;
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
}

int main() {
    char c1, c2, c3;

    printf("Digite 3 caracteres (separados por espaco): ");
    scanf(" %c %c %c", &c1, &c2, &c3);

    sortThreeChars(&c1, &c2, &c3);

    printf("Caracteres ordenados: %c %c %c\n", c1, c2, c3);

    return 0;
}