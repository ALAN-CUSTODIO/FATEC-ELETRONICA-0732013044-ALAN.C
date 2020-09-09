#include <stdio.h>

int main(void) {
float R1 ,R2 , R_EQUIVALENTE;
printf("Digite o valor do resistor r1[OHMS]\n");
scanf("%f", &R1);
printf(" Agora o valor do r2 [OHMS]\n");
scanf("%f", &R2);
R_EQUIVALENTE= (R1*R2)/(R1+R2);
printf(" Resistência equivalente é %.3f [OHMS]\n", R_EQUIVALENTE);
  return 0;
}