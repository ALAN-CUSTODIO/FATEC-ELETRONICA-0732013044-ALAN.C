#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
float valor_ms ,valor_km ;
  
  printf("Digite o numero em metros por segundos [m/s]  \n");
scanf("%f",&valor_ms );
 valor_km = valor_ms * 3.6;
printf("o  valor em kilometros por hora é  %.2f[km/h]\n" , valor_km);
;  return 0;
}