#include <stdio.h>
#include <stdlib.h>
void primo(int N){
    int i,a=0;
    for(i=2;i<N;i++){
        if(N%i==0)a++;
    }
    if(a==0)printf("O NUMERO E PRIMO\n");
    else printf("O NUMERO NAO E PRIMO\n");
}
int main()
{
    int N;
    printf("INFORME UM NUMERO: ");
    scanf("%d", &N);
    primo(N);
    return 0;
}
