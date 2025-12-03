#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char Estado[20] = "amazonas" ;
  char cidade[20] = "manaus";
  char códigodacarta[4] = "A01";
  int população = 225;
  double área = 1000;
  double PIB = 5656;
  int pontosturísticos = 15;


  printf("Digite o nome do Estado: \n");
  scanf("%s" , &Estado);

  printf("Digite o nome da cidade: \n");
  scanf("%s" , &cidade);

  printf("Digite o códigodacarta: \n");
  scanf("%s" , &códigodacarta);

  printf("Digite a população: \n");
  scanf("%f" , &população);

  printf("Digite a área: \n");
  scanf("%f" , &área);

  printf("Digite o PIB: \n");
  scanf("%f" , &PIB);

  printf("Digite os pontoturísticos: \n");
  scanf("%d" , &pontosturísticos);

  printf("Estado: %s\n", Estado);
  printf("cidade: %s\n", cidade);
  printf("códigodacarta: %s\n", códigodacarta);
  printf("população: %f\n", população);
  printf("área: %f\n", área);
  printf("PIB: %f\n", PIB);
  printf("pontoturísticos: %d\n", pontosturísticos);

  return 0;

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
