/*
 * PROGRAMA VERIFICADOR DE TRIANGULOS
 *
 * Objetivo:
 * - Verificar se tres valores podem formar um triangulo
 * - Classificar o tipo de triangulo formado
 *
 * Funcionamento:
 * 1. Recebe tres valores inteiros como entrada
 * 2. Verifica se os valores obedecem a condicao de existencia de triangulo:
 *    - Cada lado deve ser menor que a soma dos outros dois
 *    - Cada lado deve ser maior que o modulo da diferenca dos outros dois
 * 3. Se formar triangulo, classifica em:
 *    - Equilatero: todos os lados iguais
 *    - Isosceles: dois lados iguais
 *    - Escaleno: todos os lados diferentes
 * 4. Se nao formar triangulo, informa ao usuario
 *
 * Logica de verificacao:
 * - Usa a formula geral |b-c| < a < b+c para todos os lados
 * - Operadores logicos && (E) para combinar condicoes
 * - Operadores de comparacao == e != para verificar igualdade
 *
 * Estruturas:
 * - if-else para verificacao principal
 * - ifs aninhados para classificacao
 * - printf para saida formatada
 *
 * Bibliotecas:
 * - stdio.h para entrada/saida
 * - stdlib.h para funcao abs()
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c;

  printf("Verificador de triangulos\nDigite 3 valores quaisquer:\n");
  scanf("%d %d %d", &a, &b, &c);

  if ( (((abs(b-c))<a)&&(a<(b+c))) && (((abs(a-c))<b)&&(b<(a+c))) && (((abs(a-b))<c)&&(c<(a+b))) ) {
    printf("Formam um triangulo\n");
    if ((a==b)&&(b==c)) {
      printf("Equilatero\n");
    }
    if ((a==b)||(a==c)||(b==c)) {
      if ((a!=b)||(b!=c)) {
        printf("Isosceles\n");
      }
    }
    if ((a!=b)&&(a!=c)&&(b!=c)) {
      printf("Escaleno\n");
    }
  } else {
    printf("Nao formam um triangulo\n");
  }

  return 0;
}