#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char Estado[20] ;
  char cidade[20] = "Manaus";
  char códigodacarta[4] = "A01";
  int população = 2000000;
  double área = 11.401092;
  double PIB = 103.281436;
  int pontosturísticos = 223;

  printf("Digite o nome do Estado: \n");
  scanf("%s" , &Estado);

  printf("Digite o nome da cidade: \n");
  scanf("%s" , &cidade);

  printf("Digite o códigodacarta: \n");
  scanf("%s" , &códigodacarta);

  printf("Digite a popolação: \n");
  scanf("%d" , &população);

  printf("Digite a área: \n");
  scanf("%f" , &área);

  printf("Digite o PIB: \n");
  scanf("%f" , &PIB);

  printf("Digite o pontoturísticos: \n");
  scanf("%d" , &pontosturísticos);

  printf("Nome do Estado: %s, Nome da cidade %s \n", Estado, cidade);
  printf("códigodacarta: %s \n", códigodacarta);
  printf("população: %d, área: %f \n", população, área);
  printf("PIB: %f, pontosturísticos %d \n", PIB, pontosturísticos);

  





  return 0;

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
