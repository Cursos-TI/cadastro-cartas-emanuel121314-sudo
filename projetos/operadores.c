#include <stdio.h>

int main(){   
  float temperatura, humidade;
  unsigned int estoque;
  unsigned int estoqueminimo = 100;

  printf("Digite o valor da temperatura: \n");
  scanf("%f" , &temperatura);
  printf("Digite o valor da humidade: \n");
  scanf("%f" , &humidade);
  printf("Digite o valor do estoque: \n");
  scanf("%u" , &estoque);

if (temperatura >= 32)
{ printf ("temperatura esta alta \n");
}
else {
  printf("temperatura esta baixa \n");
}
if (humidade > 40)
{printf("Humidade esta boa \n");
} 
else{ printf("humidade esta baixa\n");}

if (estoque<estoqueminimo)
{printf("estoque esta baixo\n");
  /* code */
} 
else {("estoque esta adequado\n");}




}