#include <stdio.h>
#include <stdlib.h>

main()

{
    int I;

    printf("Informe a sua idade: ");
    scanf("%d", &I);

    if(I<18)
    {
        printf("Menor de idade");
    }
    if(I>=18&&I<=65)
    {
        printf("Maior de idade");
    }
    if(I>65)
    {
        printf("Maior de 65");
    }
}
