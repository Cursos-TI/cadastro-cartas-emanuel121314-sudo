#include <stdio.h>

int main(){
    int jogosupertrunfo;
    int carta1, carta2;
    char Estado1[100];
    char Estado2[100];
    char cidade1[100];
    char Cidade2[100];
    char codigodacarta1[5];
    char codigodacarta2[5];
    unsigned long int população1;
    unsigned long int população2;
    float area1;
    float area2;
    float Pib1;
    float Pib2;
    int pontosturisticos1;
    int pontosturisticos2;
    float densidadepopulacional1;
    float densidadepopulacional2;
    float pibpercapita1;
    float pibpercapita2;
    float densidadeinversa1;
    float densidadeinversa2;
    float superpoder1;
    float superpoder2;
    

 
   
   
    // primeira carta//
    
    printf("JOGO SUPER TRUNFO:\n" );
    
    printf("Informações da primeira carta: \n");
   
    printf("Digite o nome do estado: \n");
    scanf("%s" , Estado1);

    printf("Digite o nome da cidade: \n");
    scanf("%s" , cidade1);

    printf("Digite o código da carta: \n");
    scanf("%s" , codigodacarta1);

    printf("Digite a População: \n");
    scanf("%lu" , &população1);

    printf("Digite a área(km^2): \n");
    scanf("%f" , &area1);

    printf("Digite o PIB: \n");
    scanf("%f" , &Pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d" , &pontosturisticos1);
   
    densidadepopulacional1 = (float)população1/area1;
    pibpercapita1 = (float)Pib1/população1;
    densidadeinversa1 = (float)area1/população1;
    superpoder1 = (float) população1 + area1 + Pib1 + pontosturisticos1 + pibpercapita1 + densidadeinversa1;
    

    
    printf("Nome do estado: %s \n", Estado1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("Código da carta: %s \n", codigodacarta1);
    printf("População: %lu \n", população1);
    printf("Área(km^2): %5.f \n", area1);
    printf("PIB: %5.f \n", Pib1);
    printf("Pontos turísticos: %d \n", pontosturisticos1);
    printf("Densidade populacional: %5.f\n", densidadepopulacional1);
    printf("PIB per capita: %5.f\n" , pibpercapita1);
    printf("Densidade inversa: %5.f\n", densidadeinversa1);
    printf("Super poder: %5.f\n", superpoder1);
    

    
    

    //segunda carta// 

   printf("Digite as informações da segunda carta:\n");
    
    printf("Digite o nome do estado: \n");
    scanf("%s" , Estado2);

    printf("Digite o nome da cidade: \n" ); 
    scanf("%s" , Cidade2);

    printf("Digite o código da carta: \n" );
    scanf("%s" , codigodacarta2);

    printf("Digite a População(km^2): \n" );
    scanf("%lu" , &população2);

    printf("Digite a área: \n" );
    scanf("%f" , &area2);

    printf("Digite o PIB: \n" );
    scanf("%f" , &Pib2);

    printf("Digite o número de pontos turísticos: \n" );
    scanf("%d" , &pontosturisticos2);
   
    densidadepopulacional2 = (float)população2/area2;
    pibpercapita2 = (float)Pib2/população2;
    densidadeinversa2 = (float)area2/população2;
    superpoder2 = (float) população2 + area2 + Pib2 + pontosturisticos2 + pibpercapita2 + densidadeinversa2;
    
    printf("Nome do estado: %s \n", Estado2);
    printf("Nome da cidade: %s \n", Cidade2);
    printf("Código da carta: %s \n", codigodacarta2);
    printf("População: %lu \n", população2);
    printf("Área(km^2): %5.f \n", area2);
    printf("PIB: %5.f \n", Pib2);
    printf("Pontos turísticos: %d \n", pontosturisticos2);
    printf("Densidade populacional: %5.f\n", densidadepopulacional2);
    printf("PIB per capita: %5.f\n" , pibpercapita2);
    printf("Densidade inversa: %5.f \n" , densidadeinversa2);
    printf("Super poder segunda carta: %5.f \n",superpoder2);

    printf("ATRIBUDO PARA COMPARAÇÃO DAS CARTAS:SUPERPODER\n");

   if (superpoder1>superpoder2)
   { printf("carta 1 venceu \n");
    /* code */
   } else { printf("carta 2 venceu \n");
   }

}