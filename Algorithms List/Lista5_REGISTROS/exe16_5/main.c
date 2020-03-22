#include <stdio.h>
#include <stdlib.h>
struct{
    float preco,qkwh,tarifa;
    int codigo;
    char nome[30],end[50],mes[20],cod;
}consumidor[10];
int main()
{
    int op,p,x,a,i=0;
    float mt=0,mn;
    do{
        printf("1 - CADASTRAR\n");
        printf("2 - CONSULTAR\n");
        printf("3 - EXCLUIR\n");
        printf("4 - RELATORIO\n");
        printf("5 - SAIR\n");
        scanf("%d", &op);
        if(op==1){
            printf("CONSUMIDOR %d\n", i+1);
            printf("INFORME CODIGO: ");
            scanf("%d", &consumidor[i].codigo);
            printf("INFORME NOME: ");
            fflush(stdin);
            gets(consumidor[i].nome);
            printf("INFORME PRECO DO KWH: ");
            scanf("%f", &consumidor[i].preco);
            do{
                printf("INFORME MES DE COBRANCA: ");
                fflush(stdin);
                gets(consumidor[i].mes);
                x=0;
                for(a=0;a<i;a++){
                    if(strcmp(consumidor[a].mes,consumidor[i].mes)==0&&a!=i&&strcmp(consumidor[a].nome,consumidor[i].nome)==0){
                        printf("MES DE COBRANCA JA UTILIZADO POR ESSE CONSUMIDOR\n");
                        x++;
                    }
                }
            }while(x!=0);
            printf("INFORME QUANTIDADE DE KWH CONSUMIDO: ");
            scanf("%f", &consumidor[i].qkwh);
            printf("INFORME ENDERECO: ");
            fflush(stdin);
            gets(consumidor[i].end);
            printf("INFORME TIPO DE CONSUMIDOR(R/C/I): ");
            fflush(stdin);
            consumidor[i].cod=getchar();
            consumidor[i].tarifa=(consumidor[i].qkwh*consumidor[i].preco);
            i++;
            system("cls");
        }
        if(op==2){
            x=0;
            printf("INFORME CODIGO: ");
            scanf("%d", &p);
            for(a=0;a<i;a++){
                if(p==consumidor[a].codigo){
                    printf("NOME: %s\n", consumidor[a].nome);
                    printf("PRECO DO KWH: %.2f\n", consumidor[a].preco);
                    printf("MES DE COBRANCA: %s\n", consumidor[a].mes);
                    printf("QUANTIDADE DE KWH CONSUMIDO: %.2f\n", consumidor[a].qkwh);
                    printf("ENDERECO: %s\n", consumidor[a].end);
                    printf("TIPO DO CONSUMIDOR: %c\n", consumidor[a].cod);
                    printf("TARIFA: %.2f\n\n", consumidor[a].tarifa);
                    x++;
                }
            }
            if(x==0)printf("CONSUMIDOR NAO ENCONTRADO\n");
        }
        if(op==3){
            x=0;
            printf("INFORME CODIGO: ");
            scanf("%d", &p);
            for(a=0;a<i;a++){
                if(consumidor[a].codigo==p){
                    consumidor[a].codigo=NULL;
                    printf("CONSUMIDOR EXCLUIDO\n");
                    x++;
                }
            }
            if(x==0)printf("CONSUMIDOR NAO ENCONTRADO\n");
        }
        if(op==4){
            printf("O TOTAL A PAGAR EM REAIS E DOLAR DE CADA CONSUMIDOR\n");
            for(a=0;a<i;a++){
                printf("CONSUMIDOR: %d\n",a+1);
                printf("TOTAL A PAGAR EM REAIS: %.2f\n", consumidor[a].tarifa);
                printf("TOTAL A PAGAR EM DOLARES: %.2f\n", consumidor[a].tarifa/2.10);
            }
            printf("\nO MAIOR CONSUMO DO TIPO RESIDENCIAL\n");
            for(a=0;a<i;a++){
                if(consumidor[a].qkwh>mt&&consumidor[a].cod=='R'){
                    mt=consumidor[a].qkwh;
                }
            }
            printf("%.0f KWH\n\n", mt);
            printf("O MENOR CONSUMO GERAL\n");
            for(a=0;a<i;a++){
                if(a==0)mn=consumidor[a].qkwh;
                if(consumidor[a].qkwh<mn){
                    mn=consumidor[a].qkwh;
                }
            }
            printf("%.0f KWH\n\n", mn);
            printf("QUANTIDADE DE CONSUMIDORES\n");
            printf("RESIDENCIAL\n");
            x=0;
            for(a=0;a<i;a++){
                if(consumidor[a].cod=='R')x++;
            }
            printf("%d CONSUMIDORES\n",x);
            printf("COMERCIAL\n");
            x=0;
            for(a=0;a<i;a++){
                if(consumidor[a].cod=='C')x++;
            }
            printf("%d CONSUMIDORES\n",x);
            printf("INDUSTRIAL\n");
            x=0;
            for(a=0;a<i;a++){
                if(consumidor[a].cod=='I')x++;
            }
            printf("%d CONSUMIDORES\n\n",x);
        }
        if(op==5)break;
    }while(op!=5);
    return 0;
}
