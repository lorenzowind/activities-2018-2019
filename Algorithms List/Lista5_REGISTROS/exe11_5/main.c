#include <stdio.h>
#include <stdlib.h>
struct data_nascimento{
    int dia,mes,ano;
};
struct data_ultima_compra{
    int dia,mes,ano;
};
struct{
    char nome[30],email[30],end[50];
    float cred;
    struct data_nascimento dn;
    struct data_ultima_compra duc;
}clientes[10];
int main()
{
    int op,i=0,a;
    while(1){
        printf("1 - CADASTRAR CLIENTE\n");
        printf("2 - RELATORIO DOS ANIVERSARIANTES\n");
        printf("3 - RELATORIO DOS CLIENTES COM CREDITO ACIMA DE 1000\n");
        printf("4 - RELATORIO DOS CLIENTE QUE NAO FAZEM COMPRAS HA MAIS DE 2 MESES\n");
        scanf("%d", &op);
        if(op==1){
            printf("CLIENTE %d\n", i+1);
            printf("INFORME NOME: ");
            fflush(stdin);
            gets(clientes[i].nome);
            printf("INFORME EMAIL: ");
            fflush(stdin);
            gets(clientes[i].email);
            printf("INFORME ENDERECO: ");
            fflush(stdin);
            gets(clientes[i].end);
            printf("INFORME CREDITO NA LOJA: ");
            scanf("%f", &clientes[i].cred);
            printf("DATA DE NASCIMENTO\n");
            printf("INFORME DIA: ");
            scanf("%d", &clientes[i].dn.dia);
            printf("INFORME MES: ");
            scanf("%d", &clientes[i].dn.mes);
            printf("INFORME ANO: ");
            scanf("%d", &clientes[i].dn.ano);
            printf("DATA DA ULTIMA COMPRA\n");
            printf("INFORME DIA: ");
            scanf("%d", &clientes[i].duc.dia);
            printf("INFORME MES: ");
            scanf("%d", &clientes[i].duc.mes);
            printf("INFORME ANO: ");
            scanf("%d", &clientes[i].duc.ano);
            i++;
            system("cls");
        }
        if(op==2){
            printf("JANEIRO:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==1){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
            printf("FEVEREIRO:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==2){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
            printf("MARCO:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==3){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
            printf("ABRIL:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==4){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
            printf("MAIO:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==5){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
            printf("JUNHO:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==6){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
            printf("JULHO:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==7){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
            printf("AGOSTO:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==8){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
            printf("SETEMBRO:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==9){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
            printf("OUTUBRO:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==10){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
            printf("NOVEMBRO:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==11){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
            printf("DEZEMBRO:\n");
            for(a=0;a<i;a++){
                if(clientes[a].dn.mes==12){
                    printf("EMAIL: %s\n", clientes[a].email);
                    printf("ENDERECO: %s\n\n", clientes[a].end);
                }
            }
        }
        if(op==3){
            for(a=0;a<i;a++){
                if(clientes[a].cred>1000.0){
                    printf("NOME: %s\n", clientes[a].nome);
                    printf("CREDITO NA LOJA: %.2f\n\n", clientes[a].cred);
                }
            }
        }
        if(op==4){
            for(a=0;a<i;a++){
                if(clientes[a].duc.mes<=5||clientes[i].duc.ano<=2018){
                    printf("NOME: %s\n", clientes[a].nome);
                    printf("DATA DA ULTIMA COMPRA\n");
                    printf("DIA: %d\n", clientes[a].duc.dia);
                    printf("MES: %d\n", clientes[a].duc.mes);
                    printf("ANO: %d\n\n", clientes[a].duc.ano);
                }
            }
        }
    }
    return 0;
}
