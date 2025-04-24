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