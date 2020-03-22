#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct registro{
    char placa[30],modelo[30],cor[30];
    int ano;
}carro[10];
int main()
{
    FILE *p;
    p = fopen("t.txt","w+b");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    int i=0,op;
    do{
        system("cls");
        printf("1 - Cadastrar\n");
        printf("0 - Sair\n");
        printf("Escoha uma opcao: ");
        scanf("%d", &op);
        if(op==1){
            system("cls");
            if(i==10){
                printf("Nao e possivel cadastrar\n");
            }
            else{
                printf("Informe placa: ");
                fflush(stdin);
                gets(carro[i].placa);
                fflush(stdin);
                if(strcmp(carro[i].placa,"fim")==0)op=0;
                else{
                    fputs("Placa: ",p);fputs(carro[i].placa,p);fputc('\n',p);
                    printf("Informe modelo: ");
                    gets(carro[i].modelo);
                    fflush(stdin);
                    fputs("Modelo: ",p);fputs(carro[i].modelo,p);fputc('\n',p);
                    printf("Informe cor: ");
                    gets(carro[i].cor);
                    fflush(stdin);
                    fputs("Cor: ",p);fputs(carro[i].cor,p);fputc('\n',p);
                    printf("Informe ano: ");
                    scanf("%d", &carro[i].ano);
                    fputs("Ano: ",p);fwrite(&carro[i].ano,sizeof(int),1,p);fputs("\n\n",p);
                    i++;
                }
            }
            system("pause");
        }
    }while(op!=0);
    system("cls");
    rewind(p);
    char aux = fgetc(p);
    while(aux != EOF){
        printf("%c",aux);
        aux = fgetc(p);
    }
    fclose(p);
    return 0;
}
