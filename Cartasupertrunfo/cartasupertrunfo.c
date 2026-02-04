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
    int opcao;
    int segundaopção;
    int terceiraopcao;
    int quartaopcao;
    int quintaopcao;
    int sextaopcao;
    float soma;
    int resultado;
 
   
   
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

    printf("Digite a População: \n" );
    scanf("%lu" , &população2);

    printf("Digite a área(km^2): \n" );
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

    printf("***Escolha o atributo para comparação das cartas***\n");

    printf("1 População\n");
    printf("2 área\n");
    printf("3 PIB\n");
    printf("4 número de pontos turísticos\n");
    printf("5 Densidade populacional\n");
    scanf("%d", &opcao);

    resultado = opcao == 1 ? 1 : 0;

    if (resultado == 1)
    { printf("Escolha a segundo atributo para comparação\n");
      
      printf("1 área\n");
      printf("2 PIB\n");
      printf("3 número de pontos turísticos\n");
      printf("4 Densidade populacional\n");
      scanf("%d", &segundaopção);
    } 
    resultado = opcao == 2 ? 1 : 0;

    if (resultado == 1)
     {printf("Escolha a segundo atributo para comparação\n");
      
      printf("1 População\n");
      printf("2 PIB\n");
      printf("3 número de pontos turísticos\n");
      printf("4 Densidade populacional\n");
      scanf("%d", &terceiraopcao); 
    }

    resultado = opcao == 3 ? 1 : 0;

    if (resultado == 1)
    { printf("Escolha a segundo atributo para comparação\n");
      
      printf("1 População\n");
      printf("2 área\n");
      printf("3 número de pontos turísticos\n");
      printf("4 Densidade populacional\n");
      scanf("%d", &quartaopcao);
    }
     resultado = opcao == 4 ? 1 : 0;

     if (resultado == 1)
     { printf("Escolha a segundo atributo para comparação\n");
       
       printf("1 População\n");
       printf("2 área\n");
       printf("3 PIB\n");
       printf("4 Densidade populacional\n");
       scanf("%d", &quintaopcao);
     }
     
     resultado = opcao == 5 ? 1 : 0;

     if (resultado == 1)
     { printf("Escolha a segundo atributo para comparação\n");
       
       printf("1 População\n");
       printf("2 área\n");
       printf("3 PIB\n");
       printf("4 número de pontos turísticos\n");
       scanf("%d", &sextaopcao);}
        
      switch (opcao){
        case 1: if ( população1 > população2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: População\n");
            printf("Valores do atributo: %lu\n" , população1);
            printf("Carta um venceu este atributo!\n");
        
        }  
        else if ( população1 < população2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: População\n");
            printf("Valores do atributo: %lu\n" , população2);
            printf("Carta dois venceu este atributo!\n");}
        else { printf("*** EMPATE***\n");
        }
        break;
        case 2: if (area1 > area2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Área\n");
            printf("Valores do atributo: %5.f\n" , area1);
            printf("Carta um venceu este atributo!\n");
        } 
        else if(area1 < area2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Área\n");
            printf("Valores do atributo: %5.f\n" , area2);
            printf("Carta dois venceu este atributo!\n");
        } 
        else { printf("*** EMPATE***\n");
        }
        break;
        case 3: if (Pib1 > Pib2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: PIB\n");
            printf("Valores do atributo: %5.f\n" , Pib1);
            printf("Carta um venceu este atributo!\n");
        } else if (Pib1 < Pib2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: PIB\n");
            printf("Valores do atributo: %5.f\n" , Pib2);
            printf("Carta dois venceu este atributo!\n");
        } 
        else { printf("*** EMPATE***\n");
        }
        break;
        case 4: if (pontosturisticos1 > pontosturisticos2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Pontos Turísticos\n");
            printf("Valores do atributo: %d\n" , pontosturisticos1);
            printf("Carta um venceu este atributo!\n");
        } 
        else if (pontosturisticos1 < pontosturisticos2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Pontos Turístcos\n");
            printf("Valores do atributo: %d\n" , pontosturisticos2);
            printf("Carta dois venceu este atributo!\n");
        } 
        else { printf("***EMPATE***\n");
        }
        break;
        case 5: if (densidadepopulacional1 > densidadepopulacional2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Densidade Populacional\n");
            printf("Valores do atributo: %5.f\n" , densidadepopulacional2);
            printf("Carta doisv venceu este atributo!\n");
        } 
        else if(densidadepopulacional1 < densidadepopulacional2){
            printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Densidade Populacional\n");
            printf("Valores do atributo: %5.f\n" , densidadepopulacional1);
            printf("Carta um venceu este atributo!\n");
        } 
        else { printf("***EMPATE***");
        }
        break; }
         
    
    
        switch (segundaopção){
        
        case 1: if (area1 > area2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Área\n");
            printf("Valores do atributo: %5.f\n" , area1);
            printf("Carta um venceu este atributo!\n");
        } 
        else if(area1 < area2){
            printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Área\n");
            printf("Valores do atributo: %5.f\n" , area2);
            printf("Carta dois venceu este atributo!\n");
        } 
        else { printf("*** EMPATE***\n");
        }
        break;

        case 2 : if (Pib1 > Pib2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: PIB\n");
            printf("Valores do atributo: %5.f\n" , Pib1);
            printf("Carta um venceu este atributo!\n");
        }
         else if (Pib1 < Pib2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: PIB\n");
            printf("Valores do atributo: %5.f\n" , Pib2);
            printf("Carta dois venceu este atributo!\n");
        } 
        else { printf("*** EMPATE***\n");
        }
        break;
        case 3: if (pontosturisticos1 > pontosturisticos2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Pontos Turísticos\n");
            printf("Valores do atributo: %d\n" , pontosturisticos1);
            printf("Carta um venceu este atributo!\n");
        } 
        else if (pontosturisticos1 < pontosturisticos2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Pontos Turístcos\n");
            printf("Valores do atributo: %d\n" , pontosturisticos2);
            printf("Carta dois venceu este atributo!\n");
        } else { printf("***EMPATE***\n");
        }
        break;
        case 4: if (densidadepopulacional1 > densidadepopulacional2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Densidade Populacional\n");
            printf("Valores do atributo: %5.f\n" , densidadepopulacional2);
            printf("Carta doisv venceu este atributo!\n");
        } else if(densidadepopulacional1 < densidadepopulacional2){
            printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Densidade Populacional\n");
            printf("Valores do atributo: %5.f\n" , densidadepopulacional1);
            printf("Carta um venceu este atributo!\n");
        } else { printf("***EMPATE***");
        }
        break; }
        
    

    switch (terceiraopcao)
   {   case 1: if ( população1 > população2)
      {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: População\n");
            printf("Valores do atributo: %lu\n" , população1);
            printf("Carta um venceu este atributo!\n");
        
        } else if ( população1 < população2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: População\n");
            printf("Valores do atributo: %lu\n" , população2);
            printf("Carta dois venceu este atributo!\n");}
        else { printf("*** EMPATE***\n");
        }
        break;
        case 2: if (Pib1 > Pib2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: PIB\n");
            printf("Valores do atributo: %5.f\n" , Pib1);
            printf("Carta um venceu este atributo!\n");
        } else if (Pib1 < Pib2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: PIB\n");
            printf("Valores do atributo: %5.f\n" , Pib2);
            printf("Carta dois venceu este atributo!\n");
        } else { printf("*** EMPATE***\n");
        }
        break;
        case 3: if (pontosturisticos1 > pontosturisticos2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Pontos Turísticos\n");
            printf("Valores do atributo: %d\n" , pontosturisticos1);
            printf("Carta um venceu este atributo!\n");
        } else if (pontosturisticos1 < pontosturisticos2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Pontos Turístcos\n");
            printf("Valores do atributo: %d\n" , pontosturisticos2);
            printf("Carta dois venceu este atributo!\n");
        } else { printf("***EMPATE***\n");
        }
        break;
        case 4: if (densidadepopulacional1 > densidadepopulacional2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Densidade Populacional\n");
            printf("Valores do atributo: %5.f\n" , densidadepopulacional2);
            printf("Carta doisv venceu este atributo!\n");
        } else if(densidadepopulacional1 < densidadepopulacional2){
            printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Densidade Populacional\n");
            printf("Valores do atributo: %5.f\n" , densidadepopulacional1);
            printf("Carta um venceu este atributo!\n");
        } else { printf("***EMPATE***");
        }
        break; 

        }
        
       
        switch (quartaopcao){
            case 1: if ( população1 > população2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: População\n");
            printf("Valores do atributo: %lu\n" , população1);
            printf("Carta um venceu este atributo!\n");
        
        } else if ( população1 < população2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: População\n");
            printf("Valores do atributo: %lu\n" , população2);
            printf("Carta dois venceu este atributo!\n");}
        else { printf("*** EMPATE***\n");
        }
        break;
        case 2: if (area1 > area2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Área\n");
            printf("Valores do atributo: %5.f\n" , area1);
            printf("Carta um venceu este atributo!\n");
        } else if(area1 < area2){
            printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Área\n");
            printf("Valores do atributo: %5.f\n" , area2);
            printf("Carta dois venceu este atributo!\n");
        } else { printf("*** EMPATE***\n");
        }
        break;
        case 3: if (pontosturisticos1 > pontosturisticos2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Pontos Turísticos\n");
            printf("Valores do atributo: %d\n" , pontosturisticos1);
            printf("Carta um venceu este atributo!\n");
        } else if (pontosturisticos1 < pontosturisticos2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Pontos Turístcos\n");
            printf("Valores do atributo: %d\n" , pontosturisticos2);
            printf("Carta dois venceu este atributo!\n");
        } else { printf("***EMPATE***\n");
        }
        break;
        case 4: if (densidadepopulacional1 > densidadepopulacional2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Densidade Populacional\n");
            printf("Valores do atributo: %5.f\n" , densidadepopulacional2);
            printf("Carta doisv venceu este atributo!\n");
        } else if(densidadepopulacional1 < densidadepopulacional2){
            printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Densidade Populacional\n");
            printf("Valores do atributo: %5.f\n" , densidadepopulacional1);
            printf("Carta um venceu este atributo!\n");
        } else { printf("***EMPATE***");
        }
        break;}
     
    switch (quintaopcao){
        case 1: if ( população1 > população2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: População\n");
            printf("Valores do atributo: %lu\n" , população1);
            printf("Carta um venceu este atributo!\n");
        
        } else if ( população1 < população2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: População\n");
            printf("Valores do atributo: %lu\n" , população2);
            printf("Carta dois venceu este atributo!\n");}
        else { printf("*** EMPATE***\n");
        }
        break;
        case 2: if (area1 > area2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Área\n");
            printf("Valores do atributo: %5.f\n" , area1);
            printf("Carta um venceu este atributo!\n");
        } else if(area1 < area2){
            printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Área\n");
            printf("Valores do atributo: %5.f\n" , area2);
            printf("Carta dois venceu este atributo!\n");
        } else { printf("*** EMPATE***\n");
        }
        break;
        case 3: if (Pib1 > Pib2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: PIB\n");
            printf("Valores do atributo: %5.f\n" , Pib1);
            printf("Carta um venceu este atributo!\n");
        } else if (Pib1 < Pib2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: PIB\n");
            printf("Valores do atributo: %5.f\n" , Pib2);
            printf("Carta dois venceu este atributo!\n");
        } else { printf("*** EMPATE***\n");
        }
        break;
        case 5: if (densidadepopulacional1 > densidadepopulacional2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Densidade Populacional\n");
            printf("Valores do atributo: %5.f\n" , densidadepopulacional2);
            printf("Carta doisv venceu este atributo!\n");
        } else if(densidadepopulacional1 < densidadepopulacional2){
            printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Densidade Populacional\n");
            printf("Valores do atributo: %5.f\n" , densidadepopulacional1);
            printf("Carta um venceu este atributo!\n");
        } else { printf("***EMPATE***");
        }
        break;}
        
    
    switch (sextaopcao){
        case 1: if ( população1 > população2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: População\n");
            printf("Valores do atributo: %lu\n" , população1);
            printf("Carta um venceu este atributo!\n");
        
        } else if ( população1 < população2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: População\n");
            printf("Valores do atributo: %lu\n" , população2);
            printf("Carta dois venceu este atributo!\n");}
        else { printf("*** EMPATE***\n");
        }
        break;
        case 2: if (area1 > area2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Área\n");
            printf("Valores do atributo: %5.f\n" , area1);
            printf("Carta um venceu este atributo!\n");
        } else if(area1 < area2){
            printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Área\n");
            printf("Valores do atributo: %5.f\n" , area2);
            printf("Carta dois venceu este atributo!\n");
        } else { printf("*** EMPATE***\n");
        }
        break;
        case 3: if (Pib1 > Pib2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: PIB\n");
            printf("Valores do atributo: %5.f\n" , Pib1);
            printf("Carta um venceu este atributo!\n");
        } else if (Pib1 < Pib2)
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: PIB\n");
            printf("Valores do atributo: %5.f\n" , Pib2);
            printf("Carta dois venceu este atributo!\n");
        } else { printf("*** EMPATE***\n");
        }
        break;
        case 4: if (pontosturisticos1 > pontosturisticos2)
        {   printf("Nome do estado:%s \n" , Estado1);
            printf("Atributo da comparação: Pontos Turísticos\n");
            printf("Valores do atributo: %d\n" , pontosturisticos1);
            printf("Carta um venceu este atributo!\n");}
            else if (pontosturisticos1 < pontosturisticos2)      
        {   printf("Nome do estado:%s \n" , Estado2);
            printf("Atributo da comparação: Pontos Turístcos\n");
            printf("Valores do atributo: %d\n" , pontosturisticos2);
            printf("Carta dois venceu este atributo!\n");
        } else { printf("***EMPATE***\n");
        }
        break;}
}

        