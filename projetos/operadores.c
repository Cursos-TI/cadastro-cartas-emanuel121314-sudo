#include <stdio.h>

int main(){   
   unsigned int bignumber;
   float nota1, nota2, nota3;
   float media;
  
   printf("Digite o valor maior: \n");
   scanf("%u" , &bignumber);

   printf("Digite o primeiro valor:\n" );
   scanf("%f" , &nota1);
   printf("Digite o segundo valor: \n ");
   scanf("%f" , &nota2);
   printf("Digite o terceiro valor: \n" );
   scanf("%f" , &nota3);
   media = (nota1 + nota2 + nota3)/3 - (nota1 + nota2 - nota3);
   printf("valor da media: %2f", media);
   return 0;




    
}