#include <stdio.h>

int main(){   
  int valormarca;
 
  printf("Escolha as marcas do veículos\n");
  printf("Marca número um, ford\n");
  printf("Marca número dois, fiat\n");
  printf("Marca número três, toyota\n");
  scanf("%d" , &valormarca);

  switch (valormarca)
  {
  case 1: 
  printf("Marca boa, porém com alto custo de peças\n");
    break;
    case 2:
    printf("Marca boa, peças com baixo custo, porém baixa duração\n");
    break;
    case 3:
    printf("Marca muito boa, peças um pouco mais caras, mas com ótima qualidade\n");
    break;
  
  default:printf("Não temos essa opção\n");
    break;
  }
 printf("dswwsd\n");


}