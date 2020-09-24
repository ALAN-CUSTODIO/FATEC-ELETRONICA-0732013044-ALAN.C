#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main(void) {

float r_equivalente, e_resist1, e_resist2,e_tensao_fonte,a_corrente_sistema,s_tensao_r1,s_tensao_r2,s_corrente_r1,s_corrente_r2;  
  printf("Digite o valor da tensão [V]\n");
  scanf("%f",& e_tensao_fonte);
  printf("Digite o valor de R1 [ohms]\n");
  scanf("%f", & e_resist1);
  printf("Agora para terminar o valor de R2 [ohms]\n");
  scanf("%f",&e_resist2);
r_equivalente= e_resist1 + e_resist2;


if (r_equivalente<=0)
printf(" \n\n---------->(ERRO ,NUMERO DIGITADO EM R1 E R2, TEM QUE SER MAIOR QUE ZERO) %f\n\n\n",r_equivalente); 
a_corrente_sistema=e_tensao_fonte/r_equivalente;
s_tensao_r1=e_resist1*a_corrente_sistema;
s_corrente_r1=a_corrente_sistema;
s_tensao_r2=e_resist2*a_corrente_sistema;
s_corrente_r2=a_corrente_sistema;
printf("\nTensão e Corrente de R1 é \n%.2f [Volts] \n%.5f[Ampere]", s_tensao_r1, s_corrente_r1);
printf("\n\n Tensão e Corrente R2 é\n %.2f [Volts]\n%.5f [Ampere]\n",s_tensao_r2,s_corrente_r2);

   return 0;
}