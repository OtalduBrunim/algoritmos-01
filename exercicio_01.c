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
