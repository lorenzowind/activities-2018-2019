#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
   int KM, A=8, B=9, C=12;
   float G;
   char T[5];

   printf("Informe o percurso em quilometros: ");
   scanf("%d", &KM);
   printf("Informe o tipo do carro A/B/C: ");
   scanf("%s", &T);

   if(strcmp(T,"A")==0)
   {
       G = (KM/A);
       printf("\nO consumo de combustivel foi de: %.2f", G);
       printf(" litros");
   }
   if(strcmp(T,"B")==0)
   {
       G = (KM/B);
       printf("\nO consumo de combustivel foi de: %.2f", G);
       printf(" litros");
   }
   if(strcmp(T,"C")==0)
   {
       G = (KM/C);
       printf("\nO consumo de combustivel foi de: %.2f", G);
       printf(" litros");
   }
}
