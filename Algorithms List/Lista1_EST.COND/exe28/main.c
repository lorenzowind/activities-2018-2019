#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char M[50], TM30[50]={""};
    int TM10=0, i;
    float T, TM;

    for(i=0;i<5;i++)
    {
        printf("Informe o nome de um municipio de uma determinada regiao: ");
        scanf("%s", &M[i]);
        fflush(stdin);
        printf("Informe a temperatura media desse municipio: ");
        scanf("%f", &T);

        TM = (TM+T);
        if(T>30)
        {
           strcat(TM30,M);
           strcat(TM30," ");
        }
        if(T<10)
        {
            TM10 = (TM10+1);
        }
    }
    TM = (TM/5);
    printf("\nA temperatura media da regiao e: %.2f", TM);
    printf("\nO nome dos municipios com temperatura maior que 30 e: %s", TM30);
    printf("\nO numero de municipos com temperatura menor que 10 e: %d", TM10);

}
