/*
 * PROGRAMA PARA LEITURA E EXIBICAO DE TRES NUMEROS INTEIROS
 *
 * Objetivo:
 * - Ler tres valores inteiros digitados pelo usuario
 * - Exibir os valores lidos de forma organizada
 *
 * Funcionamento:
 * 1. Declara tres variaveis do tipo int (a, b, c)
 * 2. Solicita ao usuario que digite tres numeros inteiros
 * 3. Usa scanf() para ler os tres valores simultaneamente
 *    - Os numeros devem ser separados por espaco
 * 4. Exibe os valores armazenados nas variaveis
 *    - Mostra cada valor com seu identificador (a, b, c)
 *
 * Caracteristicas:
 * - Leitura multipla com um unico scanf()
 * - Exibicao formatada com identificacao das variaveis
 * - Trabalha apenas com valores inteiros
 *
 * Observacoes:
 * - Nao valida se a entrada sao numeros inteiros
 * - Nao realiza calculos com os valores
 * - Formato de entrada deve ser "num1 num2 num3"
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 *
 * Autor: [Seu Nome]
 * Data: [Data]
 * Versao: 1.0
 */
 #include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Digite tres numeros inteiros (separados por espaco): ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Numeros digitados: a=%d, b=%d, c=%d\n", a, b, c);
    
    return 0;
}