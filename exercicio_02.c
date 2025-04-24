/*
 * PROGRAMA PARA COMPARAR ALTURA DO USUARIO COM MEDIA NACIONAL
 *
 * Objetivo:
 * - Comparar a altura do usuario com a media brasileira
 * - Informar se esta acima, abaixo ou igual a media
 *
 * Funcionamento:
 * 1. Declara variaveis:
 *    - altura_usuario: armazena a entrada do usuario
 *    - altura_media_brasil: constante com valor 1.73m (media brasileira)
 * 2. Solicita e armazena a altura do usuario usando scanf()
 * 3. Compara a altura do usuario com a media nacional usando:
 *    - if: verifica se altura maior que a media
 *    - else if: verifica se altura menor que a media
 *    - else: caso seja igual a media
 * 4. Exibe mensagem correspondente a comparacao
 *
 * Caracteristicas:
 * - Usa tipo float para precisao em medidas de altura
 * - Valor da media nacional pre-definido (1.73m)
 * - Trata tres casos possiveis (maior, menor ou igual)
 * - Mensagens claras e objetivas
 *
 * Observacoes:
 * - Nao valida entrada negativa ou valores invalidos
 * - Media nacional fixa (poderia ser recebida como entrada)
 * - Unidade de medida fixa em metros
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 */
 #include <stdio.h>

int main() {
    float altura_usuario, altura_media_brasil = 1.73;
    
    printf("Digite sua altura em metros (exemplo: 1.75): ");
    scanf("%f", &altura_usuario);
    
    if(altura_usuario > altura_media_brasil) {
        printf("Voce esta acima da media nacional de altura!\n");
    } else if(altura_usuario < altura_media_brasil) {
        printf("Voce esta abaixo da media nacional de altura!\n");
    } else {
        printf("Voce tem exatamente a altura media nacional!\n");
    }
    
    return 0;
}