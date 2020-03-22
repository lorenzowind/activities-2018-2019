#include <stdio.h>
#include <stdlib.h>
void sinal(int N){
    if(N>0)printf("MAIOR QUE ZERO\n");
    if(N==0)printf("IGUAL A ZERO\n");
    if(N<0)printf("MENOR QUE ZERO\n");
}
int main()
{
    int N;
    printf("INFORME UM NUMERO: ");
    scanf("%d", &N);
    sinal(N);
    return 0;
}
