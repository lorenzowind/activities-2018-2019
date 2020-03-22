#include <stdio.h>
#include <stdlib.h>
struct maquinas{
    int num,num_pecas;
}maquina;
FILE *m1,*m2,*m3;
void abrir_arq(){
    m1 = fopen("Maquina1.txt","a+b");
    m2 = fopen("Maquina2.txt","a+b");
    m3 = fopen("Maquina3.txt","a+b");
    if(m1==NULL||m2==NULL||m3==NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
}
void insercao(int maq){
    abrir_arq();
    printf("Informe numero da maquina: ");
    scanf("%d", &maquina.num);
    printf("Informe numero de pecas produzidas pela maquina: ");
    scanf("%d", &maquina.num_pecas);
    if(maq==0){
        fseek(m1,SEEK_END,1);
        fwrite(&maquina,sizeof(maquina),1,m1);
        fclose(m1);fclose(m2);fclose(m3);
    }
    if(maq==1){
        fseek(m2,SEEK_END,1);
        fwrite(&maquina,sizeof(maquina),1,m2);
        fclose(m1);fclose(m2);fclose(m3);
    }
    if(maq==2){
        fseek(m3,SEEK_END,1);
        fwrite(&maquina,sizeof(maquina),1,m3);
        fclose(m1);fclose(m2);fclose(m3);
    }
}
void listagem(int maq){
    abrir_arq();
    int v[maq],i,j,aux;
    fseek(m1,SEEK_SET,1);
    fread(&maquina,sizeof(maquina),1,m1);
    if(maq==1){
        v[0] = maquina.num_pecas;
        fclose(m1);
    }
    else if(maq==2){
        v[0] = maquina.num_pecas;
        fseek(m2,SEEK_SET,1);
        fread(&maquina,sizeof(maquina),1,m2);
        v[1] = maquina.num_pecas;
    }
    else if(maq==3){
        v[0] = maquina.num_pecas;
        fseek(m2,SEEK_SET,1);
        fread(&maquina,sizeof(maquina),1,m2);
        v[1] = maquina.num_pecas;
        fseek(m3,SEEK_SET,1);
        fread(&maquina,sizeof(maquina),1,m3);
        v[2] = maquina.num_pecas;
    }
    fclose(m1);fclose(m2);fclose(m3);
    for(i=0;i<maq;i++){
        for(j=0;j<maq;j++){
            if(v[i]<v[j]){
                aux=v[j];
                v[j]=v[i];
                v[i]=aux;
            }
        }
    }
    printf("Listagem Ordenada(numero de pecas):\n");
    for(i=0;i<maq;i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}
int main()
{
    m1 = fopen("Maquina1.txt","w+b");
    m2 = fopen("Maquina2.txt","w+b");
    m3 = fopen("Maquina3.txt","w+b");
    if(m1==NULL||m2==NULL||m3==NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    fclose(m1);fclose(m2);fclose(m3);
    int i=0,op;
    do{
        system("cls");
        printf("1 - Insercao(%d/3)\n",i);
        printf("2 - Listagem ordenada\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        if(op==1){
            system("cls");
            if(i==3)printf("Limite de maquinas atingido\n");
            else{
                insercao(i);
                i++;
            }
            system("pause");
        }
        else if(op==2){
            system("cls");
            listagem(i);
            system("pause");
        }
        else if(op!=0){
            system("cls");
            printf("Opcao Invalida\n");
            system("pause");
        }

    }while(op!=0);
    return 0;
}
