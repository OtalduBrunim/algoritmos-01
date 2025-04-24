#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;
    
    printf("Calculadora de Bhaskara\n");
    printf("Digite os coeficientes a, b e c (separados por espaco): ");
    scanf("%f %f %f", &a, &b, &c);
    
    delta = pow(b, 2) - 4 * a * c;
    
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raizes reais distintas:\n");
        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Uma raiz real dupla:\n");
        printf("x = %.2f\n", x1);
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-delta) / (2 * a);
        printf("Raizes complexas conjugadas:\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imagPart);
    }
    
    return 0;
}