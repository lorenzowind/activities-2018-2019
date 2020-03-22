#include <stdio.h>
#include <stdlib.h>
void le_dados_do_teclado(int n,FILE *a){
    int i,x;
    char aux[10];
    for(i=0;i<n;i++){
        printf("Informe numero: ");
        scanf("%d", &x);
        itoa(x,aux,10);
        fputs(itoa(x,aux,10),a);
        fputc('\n',a);
    }
}
void escreve_dados_na_tela(FILE *a){
    char aux = fgetc(a);
    while(aux!=EOF){
        printf("%c",aux);
        aux = fgetc(a);
    }
}
int main()
{
    int n;
    FILE *p;
    p = fopen("t.txt","w");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    printf("Informe a quantidade de inteiros: ");
    scanf("%d", &n);
    le_dados_do_teclado(n,p);
    fclose(p);
    p = fopen("t.txt","r");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    printf("Conteudo do arquivo:\n");
    escreve_dados_na_tela(p);
    fclose(p);
    return 0;
}
