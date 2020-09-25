#include <stdio.h>
#include<stdlib.h>
int main(void) {
  int e_numero;
  printf("Digite um numero\n");
  scanf("%d", & e_numero);
  if (e_numero<10)
{printf(" %d É menor que 10 \n",e_numero);
}else if (e_numero <=20)
  {printf(" %d É um numero entre 10 e 20 \n",e_numero);
   } else if(e_numero>20) 
{printf(" %d É um numero maior que 20 ",e_numero);}
  return 0;
 }