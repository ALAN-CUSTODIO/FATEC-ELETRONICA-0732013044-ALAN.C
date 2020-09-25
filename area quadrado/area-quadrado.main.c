#include <stdio.h>
#include <math.h>

int main(void) {
int lado_quadrado , área_quadrado ;
  printf("Digite um dos lados do quadrado [m]\n");
scanf("%d", &lado_quadrado);
área_quadrado = pow(lado_quadrado,2);
printf(" o valor da área do quadrado é %d[m²]\n", área_quadrado);
return 0;
}