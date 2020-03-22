#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a=0;
    char nome[30],aux;
    FILE *p;
    p = fopen("t.txt","r");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    aux = fgetc(p);
    printf("Nome: ");
    while(aux!=EOF){
        if(aux=='-'){
            a++;
            aux=fgetc(p);
        }
        else if(a==0)printf("%c",aux);
        if(a==1){
            printf("- Idade:");
            a++;
        }
        if(a==2)printf("%c",aux);
        if(aux=='\n'){
            printf("\nNome: ");
            a=0;
        }
        aux=fgetc(p);
    }
    printf("\n");
    fclose(p);
    return 0;
}
