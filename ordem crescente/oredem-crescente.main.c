#include <stdio.h>

int main(void) {
  float primeiro ,segundo, terceiro;
  printf("Digite um valor qualquer\n");
  scanf("%f", &primeiro);
  printf("Digite o segundo número qualquer\n");
  scanf("%f", &segundo);
  printf("Agora digite o último valor \n");
  scanf("%f", & terceiro);
 { printf(" A ORDEM CRESCENTE É \n");}
if (primeiro<segundo && segundo<terceiro)
{printf(" %.1f %.1f %.1f ",primeiro,segundo,terceiro);
}else if (terceiro<segundo && segundo<primeiro)
{printf("%.1f %.1f %.1f", terceiro,segundo,primeiro);}
else if (segundo<terceiro && terceiro<primeiro)
{printf( "%.1f %.1f %.1f",segundo,terceiro,primeiro);}
else if (primeiro<terceiro && terceiro<segundo)
{printf("%.1f %.1f %.1f", primeiro,terceiro,segundo);}
else if (segundo<primeiro && primeiro<terceiro)
{printf("%.1f %.1f %.1f", segundo,primeiro,terceiro);}
else if(terceiro<primeiro && primeiro<segundo)
{printf("%.1f %.1f %.1f", terceiro,primeiro,segundo); }
    return 0;
}