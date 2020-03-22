#include <stdio.h>
#include <stdlib.h>
void proc(char pl[2][10][30],char l[2]){
    int x=rand()%10;
    if(l[0]=='I'){
        printf("PALAVRA: %s\n", pl[0][x]);
        printf("TRADUCAO: %s\n\n", pl[1][x]);
    }
    else{
        printf("PALAVRA: %s\n", pl[1][x]);
        printf("TRADUCAO: %s\n\n", pl[0][x]);
    }
}
int main()
{
    char pl[2][10][30],l[2];
    int i;
    for(i=0;i<10;i++){
        printf("INFORME PALAVRA(INGLES): ");
        fflush(stdin);
        gets(pl[0][i]);
        printf("INFORME TRADUCAO(PORTUGUES): ");
        fflush(stdin);
        gets(pl[1][i]);
    }
    do{
        printf("INFORME LETRA(I/P): ");
        fflush(stdin);
        scanf("%s", &l);
        proc(pl,l);
        if(l[0]!='I'&&l[0]!='P')break;
    }while(l[0]=='I'||l[0]=='P');

    return 0;
}
