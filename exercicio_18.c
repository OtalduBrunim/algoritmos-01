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