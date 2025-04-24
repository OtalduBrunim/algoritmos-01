/*
*
*   PROGRAMA PARA SUBSTITUIR A LETRA 'O' POR 'E'
*
*   Objetivo:
*
*   Ler uma letra digitada pelo usuario
*
*   Se a letra for 'o' ou 'O', substituir por 'e'
*
*   Exibir o resultado
*
*   Funcionamento:
*
*   Declara variavel char para armazenar a letra
*
*   Usa scanf() para ler um unico caractere
*
*   Verifica se o caractere e 'o' ou 'O'
*
*   Se for, substitui por 'e' e informa ao usuario
*
*   Se nao for, apenas exibe a letra digitada
*
*   Observacoes:
*
*   O espaco antes do %c no scanf evita problemas com buffer
*
*   Trata tanto 'o' minusculo quanto 'O' maiusculo
*
*   Exibe mensagem explicativa quando faz a substituicao
*/
#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (letra == 'o' || letra == 'O') {
        letra = 'e';
        printf("Voce digitou 'o'. Troquei por: %c\n", letra);
    } else {
        printf("Voce digitou: %c\n", letra);
    }

    return 0;
}