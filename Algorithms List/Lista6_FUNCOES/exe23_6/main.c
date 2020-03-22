#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome[10][30];
    int i;
    for(i=0;i<10;i++){
        printf("INFORME NOME: ");
        fflush(stdin);
        gets(nome[i]);
    }
    ord(nome);
    printf("NOMES: \n");
    for(i=0;i<10;i++){
        printf("%s\n", nome[i]);
    }
    return 0;
}
