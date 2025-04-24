/*
 * PROGRAMA PARA LIMITAR ENTRADA DE CARACTERES
 *
 * Objetivo:
 * - Demonstrar como restringir a entrada do usuario a um numero especifico de letras
 * - Mostrar o uso de arrays char (strings) com tamanho fixo
 *
 * Funcionamento:
 * 1. Define MAX_LETTERS como 10 (constante modificavel)
 * 2. Cria array char com tamanho MAX_LETTERS+1 (+1 para o terminador nulo)
 * 3. Usa scanf com formato "%10s" para limitar a entrada a 10 caracteres
 *    - Alternativa: fgets() com parametro de tamanho e mais seguro
 * 4. Imprime a entrada e seu comprimento usando strlen()
 *
 * Importante:
 * - Sempre deixe espaco para o terminador nulo em arrays char
 * - scanf com largura de campo previne buffer overflow
 * - Para codigo de producao, fgets() e recomendado em vez de scanf()
 *
 * Bibliotecas:
 * - stdio.h para operacoes de I/O
 * - string.h para funcao strlen()
 */
#include <stdio.h>
#include <string.h> // for strlen()

#define max_letras 10

int main() {
    char text[max_letras + 1]; // +1 for the null terminator

    printf("Digite um texto (maximo de %d letras): ", max_letras);
    scanf("%10s", text);

    printf("Voce digitou: %s\n", text);
    printf("Numero de letras digitadas: %zu\n", strlen(text));

    return 0;
}