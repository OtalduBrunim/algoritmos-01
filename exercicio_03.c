#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Digite tres numeros inteiros (separados por espaco): ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Numeros digitados: a=%d, b=%d, c=%d\n", a, b, c);
    
    return 0;
}