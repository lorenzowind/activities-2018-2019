#include <stdio.h>
#include <stdlib.h>
int verificacao(int nl,int nc,int *l,int *c){
    int x=0;
    if((nl-(*l)==2||nl-(*l)==-2)&&(nc-(*c)==1||nc-(*c)==-1))x=1;
    else if((nl-(*l)==1||nl-(*l)==-1)&&(nc-(*c)==2||nc-(*c)==-2))x=1;
    return x;

}
struct peca{
    int linha,coluna;
    char cor[30];
};
int main()
{
    char m[8][8][2];
    int i,j,l,c,x=0,op;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            m[i][j][0]='*';
        }
    }
    struct peca cavalo;
    cavalo.linha=rand()%7;
    cavalo.coluna=rand()%7;
    m[cavalo.linha][cavalo.coluna][0]='C';
    do{
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                printf("%c ", m[i][j][0]);
            }
            printf("\n");
        }
        printf("1 - INFORME NOVA POSICAO\n");
        printf("2 - SAIR\n");
        printf("ESCOLHA UMA OPCAO: ");
        scanf("%d", &op);
        if(op==1){
            printf("\nPOSICAO ATUAL DA PECA\n");
            printf("LINHA = %d\n",cavalo.linha);
            printf("COLUNA = %d\n\n",cavalo.coluna);
            printf("LINHA: ");
            scanf("%d", &l);
            printf("COLUNA: ");
            scanf("%d", &c);
            system("cls");
            x=verificacao(l,c,&cavalo.linha,&cavalo.coluna);
            if(x==1){
                printf("POSICAO VALIDA\n");
                m[cavalo.linha][cavalo.coluna][0]='*';
                m[l][c][0]='C';
                cavalo.linha=l;
                cavalo.coluna=c;
            }
            else printf("POSICAO INVALIDA\n");
        }
        if(op==2)break;
    }while(op!=2);
    return 0;
}
