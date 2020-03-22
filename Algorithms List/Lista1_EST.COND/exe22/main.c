#include <stdio.h>
#include <stdlib.h>

main()

{
    char N, S;
    float A, P;

    printf("Informe o nome dessa pessoa: ");
    scanf("%s", &N);
    printf("\nInforme o sexo da pessoa M/F: ");
    scanf("%s", &S);
    printf("\nInforme a altura dessa pessoa: ");
    scanf("%f", &A);

    if(S==*"M")
    {
        P = ((72.7*A)-58);
        printf("\nO peso ideal para ele e: %.2f", P);
        printf("\n");
    }
    if(S==*"F")
    {
        P = ((62.1*A)-44.7);
        printf("\nO peso ideal para ela e: %.2f", P);
        printf("\n");
    }
}
