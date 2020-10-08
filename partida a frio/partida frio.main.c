#include <stdio.h>
int main(void) {
float valor_alcool , temperatura_externa ;
 printf(" Digite o percentual de alcool no tanque \n");
 scanf("%f", & valor_alcool);
printf("Digite o valor da temperatura [°C]\n");
scanf("%f", & temperatura_externa);

if ((temperatura_externa >15) || (valor_alcool<50))
printf(" NÃO FOI NECESSARIO USAR O COMBUSTIVEL DO TANQUINHO DE PARTIDA");
else if ((temperatura_externa<15) && (valor_alcool>50))
printf("USAR O COMBUSTIVEL DO TANQUINHO DE PARTIDA");
return 0 ;
}