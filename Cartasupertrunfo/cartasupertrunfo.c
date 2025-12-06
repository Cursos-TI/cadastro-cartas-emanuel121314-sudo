#include <stdio.h>

int main(){
    char Estado[100];
    char Cidade[100];
    char codigodacarta[5];
    int população;
    float area;
    float Pib;
    int pontosturisticos;

    printf("Digite o nome do estado: \n");
    scanf("%s" , Estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s" , Cidade);

    printf("Digite o código da carta: \n");
    scanf("%s" , codigodacarta);

    printf("Digite a População: \n");
    scanf("%d" , &população);

    printf("Digite a área: \n");
    scanf("%2f" , &area);

    printf("Digite o PIB: \n");
    scanf("1f" , &Pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d" , &pontosturisticos);
    printf("Nome do estado: %s \n", Estado);
    printf("Nome da cidade: %s \n", Cidade);
    printf("Código da carta: %s \n", codigodacarta);
    printf("População: %d \n", população);
    printf("Área: %2f \n", area);
    printf("PIB: %2f \n", Pib);
    printf("Pontos turísticos: %d \n", pontosturisticos);

    
     return 0;











}
