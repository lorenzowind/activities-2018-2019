#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()

{
    char S[10];

    printf("Informe a sigla do estado: ");
    scanf("%s", &S);

    if(strcmp(S,"AM")==0||strcmp(S,"am")==0)
    {
        printf("Amazonense");
    }
    else
    if(strcmp(S, "ES")==0||strcmp(S, "es")==0)
    {
       printf("Capixaba");
    }
    else
    if(strcmp(S, "RN")==0||strcmp(S, "rn")==0)
    {
        printf("Potiguar");
    }
    else
    if(strcmp(S, "RS")==0||strcmp(S, "rs")==0)
    {
        printf("Gaucho");
    }
    else
    {
        printf("Outros");
    }
}
