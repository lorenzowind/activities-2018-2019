#include <stdio.h>
#include <stdlib.h>
struct{
    char prop[30],comb[20],mod[30],cor[20],placa[10];
    int nch,ano;
}veiculos[50];
int main()
{
    int i;
    for(i=0;i<50;i++){
        printf("VEICULO %d\n",i+1);
        printf("INFORME PROPRIETARIO: ");
        fflush(stdin);
        gets(veiculos[i].prop);
        printf("INFORME COMBUSTIVEL: ");
        fflush(stdin);
        gets(veiculos[i].comb);
        printf("INFORME MODELO: ");
        fflush(stdin);
        gets(veiculos[i].mod);
        printf("INFORME COR: ");
        fflush(stdin);
        gets(veiculos[i].cor);
        printf("INFORME NUMERO DO CHASSI: ");
        scanf("%d", &veiculos[i].nch);
        printf("INFORME ANO: ");
        scanf("%d", &veiculos[i].ano);
        printf("INFORME PLACA: ");
        fflush(stdin);
        gets(veiculos[i].placa);
        system("cls");
    }
    printf("CARROS DO ANO DE 1980 ACIMA MOVIDOS A DIESEL\n\n");
    for(i=0;i<50;i++){
        if(veiculos[i].ano>=1980&&strcmp(veiculos[i].comb,"diesel")==0){
            printf("VEICULO %d\n", i+1);
            printf("PROPRIETARIO: %s\n", veiculos[i].prop);
            printf("COMBUSTIVEL: %s\n", veiculos[i].comb);
            printf("MODELO: %s\n", veiculos[i].mod);
            printf("COR: %s\n", veiculos[i].cor);
            printf("NUMERO DO CHASSI: %d\n", veiculos[i].nch);
            printf("ANO: %d\n", veiculos[i].ano);
            printf("PLACA: %s\n\n", veiculos[i].placa);
        }
    }
    printf("PLACAS QUE COMECAM COM A LETRA A E TERMINAM COM 0,2,4 OU 7\n\n");
    for(i=0;i<50;i++){
        if(veiculos[i].placa[0]=='A'&&(veiculos[i].placa[6]=='0'||veiculos[i].placa[6]=='2'||veiculos[i].placa[6]=='4'||veiculos[i].placa[6]=='7')){
            printf("PROPRIETARIO: %s\n", veiculos[i].prop);
        }
    }
    printf("PLACA QUE POSSUEM COMO SEGUNDA LETRA UMA VOGAL CUJA SOMA DOS VALORES NUMERICOS E PAR\n\n");
    for(i=0;i<50;i++){
        if(veiculos[i].placa[1]=='A'||veiculos[i].placa[1]=='E'||veiculos[i].placa[1]=='I'||veiculos[i].placa[1]=='O'||veiculos[i].placa[1]=='U'){
            char ch[5]={veiculos[i].placa[3],veiculos[i].placa[4],veiculos[i].placa[5],veiculos[i].placa[6]};
            int sm=atoi(ch);
            if(sm%2==0){
                printf("MODELO: %s\n", veiculos[i].mod);
                printf("COR: %s\n", veiculos[i].cor);
            }
        }
    }
    printf("PLACAS QUE NAO POSSUEM NENHUM DIGITO IGUAL A ZERO\n\n");
    for(i=0;i<50;i++){
        if(veiculos[i].placa[3]!='0'&&veiculos[i].placa[4]!='0'&&veiculos[i].placa[5]!='0'&&veiculos[i].placa[6]!='0'){
            printf("PROPRIETARIO: %s\n", veiculos[i].prop);
            printf("NUMERO DO CHASSI: %d\n", veiculos[i].nch);
        }
    }
    return 0;
}
