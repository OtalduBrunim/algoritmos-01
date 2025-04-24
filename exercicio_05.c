/*
 * ALGORITMO PARA RESOLUÇÃO DE EQUAÇÕES QUADRÁTICAS (FORMULA DE BHASKARA)
 * 
 * Este programa calcula as raízes de uma equação do segundo grau no formato ax2 (quadrado) + bx + c = 0
 * 
 * Funcionamento:
 * 1. Lê os coeficientes reais a, b e c da equação
 * 2. Calcula o discriminante (delta) = b² - 4ac
 * 3. Classifica e calcula as raízes conforme o valor do delta:
 *    - Delta > 0: 2 raízes reais distintas
 *    - Delta = 0: 1 raiz real dupla
 *    - Delta < 0: 2 raízes complexas conjugadas
 * 4. Exibe os resultados formatados
 * 
 * Bibliotecas utilizadas:
 * - stdio.h: para entrada/saída padrão
 * - math.h: para funçoes matematicas (sqrt e pow)
 */
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