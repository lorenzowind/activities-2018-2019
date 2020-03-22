#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a=0,x;
    printf("INFORME O NUMERO DE JOGADORES: ");
    scanf("%d", &j);
    char nome[j][30];
    int n[j];
    for(i=0;i<j;i++){
        printf("INFORME NOME: ");
        fflush(stdin);
        gets(nome[i]);
        printf("INFORME NUMERO(1-100): ");
        scanf("%d", &n[i]);
    }
    x=rand()%100;
    printf("NUMERO SORTEADO: %d\n", x);
    for(i=0;i<j;i++){
        if(x==n[i]){
            printf("GANHADOR\n");
            printf("NOME: %s\n", nome[i]);
            printf("NUMERO: %d\n", n[i]);
            a++;
        }
    }
    if(a==0)printf("NAO HOUVE GANHADOR\n");
    return 0;
}
