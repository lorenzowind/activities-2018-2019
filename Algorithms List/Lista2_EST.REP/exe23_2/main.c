#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char S[2],R[4];
    int HS=0,HN=0,FS=0,FN=0;

    for(int i=1;i<=20;i++)
    {
        printf("Sexo: ");
        scanf("%s", &S);
        printf("Sim ou Nao: ");
        scanf("%s", &R);
        if((strcmp(S,"M")==0)&&(strcmp(R,"Sim")==0))
        {
            HS++;
        }
        if((strcmp(S,"M")==0)&&(strcmp(R,"Nao")==0))
        {
            HN++;
        }
        if((strcmp(S,"F")==0)&&(strcmp(R,"Sim")==0))
        {
            FS++;
        }
        if((strcmp(S,"F")==0)&&(strcmp(R,"Nao")==0))
        {
            FN++;
        }
    }
    printf("\nPessoas que responderam sim: %d", HS+FS);
    printf("\nPessoas que responderam nao: %d", HN+FN);
    printf("\nMulheres que responderam sim: %d", FS);
    printf("\nHomens que responderam nao: %d", HN);

}
