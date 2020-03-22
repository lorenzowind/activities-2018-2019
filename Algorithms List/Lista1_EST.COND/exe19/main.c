#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, A, T, B, C;

    printf("Informe um numero de 3 digitos: ");
    scanf("%d", &N);

    C = ((N%100)%10)*100;
    B = ((N%100)/10)*10;
    A = (N/100);

    T = (A+B+C);

    printf("O numero inverso e: %d", T);

    return 0;
}
