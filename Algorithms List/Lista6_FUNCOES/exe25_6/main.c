#include <stdio.h>
#include <stdlib.h>
#include "operacoes.h"
#include "areas.h"

int main()
{
    float A,B,s;
    printf("Informe A: ");
    scanf("%f", &A);
    printf("Informe B: ");
    scanf("%f", &B);
    s=adicao(A,B);
    printf("Resultado = %.2f\n",s);
}
