#include <stdio.h>

int main(){
    int carta1, carta2;
    char Estado[100];
    char Cidade[100];
    char codigodacarta[5];
    unsigned long int população;
    float area;
    float Pib;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapita;
    unsigned long int superpoder;
    float densidadeinversa;
 
   
   
    // primeira carta//
    
    printf("JOGO SUPER TRUNFO:\n");
    
    printf("Informações da primeira carta: \n");
   
    printf("Digite o nome do estado: \n");
    scanf(" %s" , Estado);

    printf("Digite o nome da cidade: \n");
    scanf(" %s" , Cidade);

    printf("Digite o código da carta: \n");
    scanf(" %s " , codigodacarta);

    printf("Digite a População: \n");
    scanf(" %lu " , &população);

    printf("Digite a área: \n");
    scanf(" %f " , &area);

    printf("Digite o PIB: \n");
    scanf(" %f " , &Pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d " , &pontosturisticos);
   
    densidadepopulacional = população/area;
    pibpercapita = Pib/população;
    densidadeinversa = area/população;
    

    
    printf("Nome do estado: %s \n", Estado);
    printf("Nome da cidade: %s \n", Cidade);
    printf("Código da carta: %s \n", codigodacarta);
    printf("População: %lu \n", população);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", Pib);
    printf("Pontos turísticos: %d \n", pontosturisticos);
    printf("Densidade populacional: %2f\n", densidadepopulacional);
    printf("PIB per capita: %2f\n" , pibpercapita);
    printf("Densidade inversa: %f\n", densidadeinversa);
    
    
    //segunda carta// 

    printf("Digite as informações da segunda carta:\n");
    
    printf("Digite o nome do estado: \n");
    scanf("%s" , Estado);

    printf("Digite o nome da cidade: \n"); 
    scanf("%s" , Cidade);

    printf("Digite o código da carta: \n");
    scanf("%s" , codigodacarta);

    printf("Digite a População: \n");
    scanf("%lu" , &população);

    printf("Digite a área: \n");
    scanf("%f" , &area);

    printf("Digite o PIB: \n");
    scanf("%f" , &Pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d" , &pontosturisticos);
   
    densidadepopulacional = população/area;
    pibpercapita = Pib/população;
    
    printf("Nome do estado: %s \n", Estado);
    printf("Nome da cidade: %s \n", Cidade);
    printf("Código da carta: %s \n", codigodacarta);
    printf("População: %lu \n", população);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", Pib);
    printf("Pontos turísticos: %d \n", pontosturisticos);
    printf("Densidade populacional: %2f\n", densidadepopulacional);
    printf("PIB per capita: %2f\n" , pibpercapita);
    
     return 0;











}
