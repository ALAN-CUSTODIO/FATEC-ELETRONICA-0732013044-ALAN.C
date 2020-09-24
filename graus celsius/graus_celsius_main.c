#include <stdio.h>
#include <math.h>

int main(void) {
  float g_celsius , g_fahrenheit ;
  printf("Digite o valor em graus Celsius [°C]\n");
scanf("%f", &g_celsius);
 g_fahrenheit = (180 *g_celsius +3200)/100;
printf("resultado %.1f[°F]\n", g_fahrenheit);

  return 0;
}