#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[10][3],i,j,NG,S=0,ND,G=0,D=0;
    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            if(j==0)printf("INFORME A NOTA X DO CANDIDATO %d: ",i);
            if(j==1)printf("INFORME A NOTA Y DO CANDIDATO %d: ",i);
            if(j==2)printf("INFORME A NOTA Z DO CANDIDATO %d: ",i);
            scanf("%d", &N[i][j]);
            S+=N[i][j];
        }
        if(S>G){
            NG=i;
            G=S;
        }
        else if(S>D){
            D=S;
            ND=i;
        }
        S=0;
    }
    printf("PRIMEIRO COLOCADO PARA DIRETOR: %d\n", NG);
    printf("PRIMEIRO COLOCADO PARA GERENTE: %d\n", ND);

    return 0;
}
