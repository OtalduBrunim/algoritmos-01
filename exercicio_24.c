/*
 * PROGRAMA PARA VERIFICACAO DE ALISTAMENTO MILITAR
 *
 * Objetivo:
 * - Verificar se um cidadao esta apto para o alistamento militar obrigatorio
 * - Considerar idade, sexo, nacionalidade e deficiencia grave
 * - Informar o status final (apto ou nao apto)
 *
 * Funcionamento:
 * 1. Coleta os dados do usuario:
 *    - Idade (entre 18 e 45 anos)
 *    - Sexo (apenas masculino)
 *    - Nacionalidade (brasileiro)
 *    - Deficiencia grave (nao pode ter)
 * 2. Converte entradas para formato padronizado (maiusculas)
 * 3. Verifica todas as condicoes necessarias:
 *    - Idade dentro da faixa exigida
 *    - Sexo masculino
 *    - Nacionalidade brasileira
 *    - Nao possuir deficiencia grave
 * 4. Exibe o resultado da verificacao
 *
 * Regras de aptidao:
 * - Obrigatorio para homens brasileiros entre 18 e 45 anos
 * - Dispensados: mulheres, estrangeiros, maiores de 45 anos
 * - Dispensados: portadores de deficiencias graves
 *
 * Bibliotecas:
 * - stdio.h para entrada/saida
 * - string.h para comparacao de strings
 * - ctype.h para funcoes de caracteres
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int idade;
    char sexo, nacionalidade[50], deficiencia[4];
    
    printf("ALISTAMENTO MILITAR OBRIGATORIO - VERIFICACAO DE APTIDAO\n\n");
    
    // Entrada de dados
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);
    sexo = toupper(sexo);  // Converte para maiúscula
    
    printf("Digite sua nacionalidade: ");
    scanf("%s", nacionalidade);
    
    printf("Possui alguma deficiencia grave? (Sim/Nao): ");
    scanf("%s", deficiencia);
    for(int i = 0; deficiencia[i]; i++) {
        deficiencia[i] = toupper(deficiencia[i]);  // Converte para maiúsculas
    }
    
    // Verificação das condições
    if (idade >= 18 && idade <= 45 && 
        sexo == 'M' && 
        strcmp(nacionalidade, "brasileiro") == 0 && 
        strcmp(deficiencia, "NAO") == 0) {
        printf("\nSTATUS: APTO para o alistamento militar obrigatorio.\n");
    } else {
        printf("\nSTATUS: NAO APTO para o alistamento militar obrigatorio.\n");
    }
    
    return 0;
}