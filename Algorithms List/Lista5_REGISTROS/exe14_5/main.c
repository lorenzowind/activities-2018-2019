#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct{
    int dia,ano;
    char mes[5];
}data;
int verificar_mes(char *mes){
    int x=0;
    if(strcmp(mes,"jan")==0)x=1;
    if(strcmp(mes,"fev")==0)x=2;
    if(strcmp(mes,"mar")==0)x=3;
    if(strcmp(mes,"abr")==0)x=4;
    if(strcmp(mes,"mai")==0)x=5;
    if(strcmp(mes,"jun")==0)x=6;
    if(strcmp(mes,"jul")==0)x=7;
    if(strcmp(mes,"ago")==0)x=8;
    if(strcmp(mes,"set")==0)x=9;
    if(strcmp(mes,"out")==0)x=10;
    if(strcmp(mes,"nov")==0)x=11;
    if(strcmp(mes,"dez")==0)x=12;
    return x;
}
int verificar_dia(int dia,int mes){
    int x=0;
    if(mes==1&&dia>=1&&dia<=31)x++;
    if(mes==2&&dia>=1&&dia<=28)x++;
    if(mes==3&&dia>=1&&dia<=31)x++;
    if(mes==4&&dia>=1&&dia<=30)x++;
    if(mes==5&&dia>=1&&dia<=31)x++;
    if(mes==6&&dia>=1&&dia<=30)x++;
    if(mes==7&&dia>=1&&dia<=31)x++;
    if(mes==8&&dia>=1&&dia<=31)x++;
    if(mes==9&&dia>=1&&dia<=30)x++;
    if(mes==10&&dia>=1&&dia<=31)x++;
    if(mes==11&&dia>=1&&dia<=30)x++;
    if(mes==12&&dia>=1&&dia<=31)x++;
    return x;
}
int diferenca(int dia,int mes,int ano,char *data_atual){
    int df=0,a,d,m;
    char chd[3]={data_atual[3],data_atual[4],0},chm[3]={data_atual[0],data_atual[1],0},cha[3]={data_atual[6],data_atual[7],0};
    d=atoi(chd);
    m=atoi(chm);
    a=atoi(cha);
    df+=(a-ano)*365;
    df+=(m-mes)*30;
    df+=(d-dia);
    return df;
}
int main()
{
    char data_atual[9];
    int m,x,df;
    _strdate(data_atual);
    //dia=data_atual[3],[4] - mes=data_atual[0],[1] - ano=data_atual[6],[7]
    do{
    printf("INFORME DATA\n");
    printf("DIA: ");
    scanf("%d", &data.dia);
    printf("MES(extenso): ");
    fflush(stdin);
    gets(data.mes);
    printf("ANO: ");
    scanf("%d", &data.ano);
    if(data.dia==00&&strcmp(data.mes,"jan")==0&&data.ano==0000)break;
    m=verificar_mes(&data.mes);
    x=verificar_dia(data.dia,m);
    if(m>=1&&m<=12&&x>0){
        printf("DATA: %d/%d/%d\n",data.dia,m,data.ano);
        printf("DATA ATUAL: %c%c/%c%c/%c%c\n",data_atual[3],data_atual[4],data_atual[0],data_atual[1],data_atual[6],data_atual[7]);
        df=diferenca(data.dia,m,data.ano,&data_atual);
        printf("DIFERENCA EM DIAS: %d\n\n",df);
    }
    else{
        printf("DATA INVALIDA\n\n");
    }
    }while(data.dia!=00||strcmp(data.mes,"jan")!=0||data.ano!=0000);
    return 0;
}
