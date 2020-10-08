#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main(void) {
  float r_equivalente , e_resist1 , e_resist2 , e_tensao_fonte, a_corrente_sistema , s_tensao_r1 , s_tensao_r2 , s_corrente_r1 , s_corrente_r2 ;
  printf("Digite o valor da tensão da fonte do circuito [volts]\n");
  scanf("%f", & e_tensao_fonte);
printf("Digite o valor de R1 [OHMS]\n");
scanf("%f", & e_resist1 );
printf("Digite o valor de R2[OHMS]\n");
 scanf("%f", & e_resist2);
 r_equivalente=(e_resist1*e_resist2)/(e_resist1+e_resist2);
 if (r_equivalente<=0)
printf("erro %f",r_equivalente);
s_tensao_r1 =  e_tensao_fonte ;
s_tensao_r2= e_tensao_fonte;
s_corrente_r1= e_tensao_fonte/e_resist1;
s_corrente_r2= e_tensao_fonte/e_resist2;
{
printf("Os valores de tensao e corrente de R1 é\n %.3f [volts]\n %.3f[ ampere]\n", s_tensao_r1, s_corrente_r1);
}
{
printf("Os valores de tensao e corrente de R2 é \n %.3f[volts]\n %.3f[ampere]",s_tensao_r2, s_corrente_r2);
}


 
return 0;
}