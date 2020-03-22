#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <locale.h>
char alf[]={'a','á','b','â','c','à','d','å','e','ã','f','ä','g','æ','h','é','i','ê','j','è','k','ë','l','Ð','m','ð','n','í','o','î','p','ì','q','ï','r','ó','s','ô','t','ò','u','ø','v','õ','w','ö','x','ú','y','û','z','ù','ü','ç','ñ'};
char num[]={'0','1','2','3','4','5','6','7','8','9'};
char car[]={'!','@','#','$','%','^','&','*','(',')','-','_','+','=','`','~','{','[','}',']','|','"','?','/','>','<','.',',',':',';'};
int qtd_blocos=0,qtd_letras=0;
FILE *arq_orig,*arq_mod;
struct lista{
    char d1,d2;
    int td1,td2;
    bool d1_num,d2_num,d1_esp,d2_esp;
    struct lista *prox;
}*L;
int menu();
void linha();
void cript();
void descript();
void descricao();
void criptografar();
void descriptografar();
int main(){
    system ("color 2");
    setlocale(LC_ALL,"");
    int op;
    L=malloc(sizeof(struct lista));
    do{
        op=menu();
        switch(op){
        case 1:
            cript();
            break;
        case 2:
            descript();
            break;
        case 3:
            descricao();
            break;
        case 0:
            linha();
            printf("\t*Programa encerrado*\n");
            break;
        default:
            linha();
            printf("\t*Opcao Invalida*\n\n");
            system("pause");
        }
    }while(op!=0);
    return 0;
}
int menu(){
    system("cls");
    int op;
    system("cls");
    linha();
    printf("\t-> Cifra de Loris <-\n");
    linha();
    printf("\t1 - Criptografar\n");
    printf("\t2 - Descriptografar\n");
    printf("\t3 - Descrição\n");
    printf("\t0 - Sair\n");
    linha();
    printf("->->-> Escolha uma opção: ");
    scanf("%d", &op);
    return op;
}
void linha(){
    int i;
    for(i=0;i<100;i++)printf("-");
    printf("\n");
}
void cript(){
    system("cls");
    qtd_blocos=0;qtd_letras=0;
    linha();
    printf("\tInforme texto:\n");
    linha();
    printf("->->-> ");
    arq_orig=fopen("original.txt","w");
    fflush(stdin);
    char aux;
    do{
        scanf("%c",&aux);
        if(aux!='\n')qtd_letras++;
        fputc(aux,arq_orig);
    }while(aux!='\n');
    fflush(stdin);
    fclose(arq_orig);
    linha();
    criptografar();
    printf("\tTexto criptografado:\n");
    linha();
    printf("->->-> ");
    arq_mod=fopen("criptografado.txt","r");
    aux=fgetc(arq_mod);
    while(aux!=EOF){
        printf("%c",aux);
        aux=fgetc(arq_mod);
    }
    fclose(arq_mod);
    printf("\n");
    linha();
    system("pause");
}
void descript(){
    system("cls");
    linha();
    printf("\tTexto criptografado:\n");
    linha();
    printf("->->-> ");
    arq_mod=fopen("criptografado.txt","r");
    char aux=fgetc(arq_mod);
    while(aux!=EOF){
        printf("%c",aux);
        aux=fgetc(arq_mod);
    }
    printf("\n");
    linha();
    fclose(arq_mod);
    descriptografar();
    printf("\tTexto descriptografado:\n");
    linha();
    printf("->->-> ");
    arq_mod=fopen("criptografado.txt","r");
    aux=fgetc(arq_mod);
    while(aux!=EOF){
        printf("%c",aux);
        aux=fgetc(arq_mod);
    }
    printf("\n");
    linha();
    fclose(arq_mod);
    system("pause");
}
void descricao(){
    system("cls");
    linha();
    printf("\tCifra de Loris - Descrição\n");
    linha();
    printf("->-> Algoritmo:\n");
    printf("[1] - Leitura da informação(texto/string) do usuário.\n");
    printf("[2] - Inserção no arquivo original.\n");
    printf("[3] - Inserção do texto criptografado em um segundo arquivo.\n");
    printf("[4] - Leitura do segundo arquivo.\n");
    printf("[5] - Inserção do texto descriptografado em um arquivo auxiliar.\n");
    printf("[6] - Sobreposição do arquivo auxiliar no segundo arquivo.\n");
    printf("[7] - Impressão do segundo arquivo para o usuário.\n");
    linha();
    printf("->-> Observações:\n");
    printf("- Não é possível fazer a leitura de letras acentuadas devido a um erro primitivo de inserção no arquivo.\n");
    printf("- Não é possível manter as letras maiúsculas inseridas pelo usuário.\n");
    linha();
    printf("->-> Lógica da Criptografia:\n");
    printf("- Divisão do texto/string em blocos de duas letras, podendo ter apenas uma letra no último bloco.\n");
    printf("- Cada bloco será uma célula da lista encadeada.\n");
    printf("- Cada célula da lista encadeada é responsável por armazenar os caracteres do bloco,\n");
    printf("suas respectivas posições no vetor contendo diversas letras acentuadas e não acentuadas,\n");
    printf("e algumas váriaveis booleanas para ter um controle a partir do dado,\n");
    printf("indicando se o mesmo é um número ou algum caractere especial.\n");
    printf("- Após a lista encadeada ter sido preenchida, ocorre a inserção das células no segundo arquivo,\n");
    printf("invertendo os caracteres de cada bloco, porém com o critério de formatação seguindo: \n");
    printf("- Supondo que a célula contenha duas letras do vetor:\n");
    printf("Se a letra 1 for maior que a letra 2 -> a letra 1 se torna a letra correspondente no vetor à soma das\n");
    printf("posições das duas letras, e essa mesma letra que foi substituída é impressa como maiúscula no arquivo.\n");
    printf("Se a letra 1 for menor que a letra 2 -> a letra 1 se torna a letra correspondente no vetor à subtração das\n");
    printf("posições das duas letras e essa mesma letra que foi substituída é impressa como minúscula no arquivo.\n");
    printf("- Supondo que a célula contenha pelo menos um número ou um caractere especial de outros vetores específicos:\n");
    printf("A letra 1 e a letra 2 são ambas substituídas pela letra correspondente no determinado\n");
    printf("vetor ao dobro da posição do caractere.\n");
    printf("- Além disso, é também inserido no arquivo a soma das posições com o tamanho do vetor multiplicado por 2,\n");
    printf("a fim de manter o número em uma permanência de 3 algarismos\n");
    linha();
    printf("->-> Lógica da Descriptografia:\n");
    printf("- É basicamente o inverso da lógica de criptografia, porém deve ser novamente verificado as\n");
    printf("condições de cada caractere, para determinar se é uma letra, número,\n");
    printf("soma de posições, ou caractere especial e assim ser devidamente tratado.\n");
    printf("- O segundo arquivo é lido, por conseguinte preenchendo a lista encadeada\n");
    printf("- Após a leitura, as letras de cada bloco são recalculadas inversamente a partir\n");
    printf("das informações datadas em cada célula da lista.\n");
    printf("- Durante esse processo, ocorre a inserção das letras já modificadas em um arquivo auxiliar.\n");
    printf("- Por último, esse arquivo auxliar é sobreposto no segundo arquivo,\n");
    printf("imprimindo o texto descriptografado para o usuário\n");
    linha();
    system("pause");
}
void criptografar(){
    L->prox=NULL;
    arq_orig=fopen("original.txt","r");
    int i=0,j;
    char aux;
    do{
        aux=fgetc(arq_orig);
        i++;
        qtd_blocos++;
        struct lista *q;
        q=malloc(sizeof(struct lista));
        q->d1_esp=false;q->d1_num=false;q->d2_esp=false;q->d2_num=false;
        q->d1=tolower(aux);
        q->td1=0;q->td2=0;
        aux=fgetc(arq_orig);
        i++;
        int a=0,b=0;
        if(aux!='\n')q->d2=tolower(aux);
        else q->d2=' ';
        for(j=0;j<strlen(alf);j++){
            if(q->d1==alf[j]&&a==0){
                q->td1=j;
                a++;
            }
            if(q->d2==alf[j]&&b==0){
                q->td2=j;
                b++;
            }
        }
        if(a==0){
            for(j=0;j<strlen(num);j++){
                if(q->d1==num[j]&&a==0){
                    q->td1=j;
                    q->d1_num=true;
                    a++;
                }
            }
            if(a==0){
                for(j=0;j<strlen(car);j++){
                    if(q->d1==car[j]&&a==0){
                        q->td1=j;
                        q->d1_esp=true;
                        a++;
                    }
                }
            }
        }
        if(b==0){
            for(j=0;j<strlen(num);j++){
                if(q->d2==num[j]&&b==0){
                    q->td2=j;
                    q->d2_num=true;
                    b++;
                }
            }
            if(b==0){
                for(j=0;j<strlen(car);j++){
                    if(q->d2==car[j]&&b==0){
                        q->td2=j;
                        q->d2_esp=true;
                        b++;
                    }
                }
            }
        }
        q->prox=L->prox;
        L->prox=q;
    }while(i<qtd_letras);
    fclose(arq_orig);
    arq_mod=fopen("criptografado.txt","w");
    struct lista *q;
    q=L->prox;
    while(q!=NULL){
        int a=0,b=0,n;
        if((!q->d1_num)&&(!q->d1_esp)&&(!q->d2_num)&&(!q->d2_esp)){
            for(i=0;i<strlen(alf);i++){
                if(q->d1==alf[i]&&a==0){
                    if(q->td1>q->td2)n=q->td1-q->td2;
                    else n=q->td1+q->td2;
                    if(i+n>=strlen(alf))q->d1=alf[(i+n)%strlen(alf)];
                    else q->d1=alf[i+n];
                    if(q->td1>q->td2)q->d1=toupper(q->d1);
                    a++;
                }
                if(q->d2==alf[i]&&b==0){
                    if(q->td2>q->td1)n=q->td2-q->td1;
                    else n=q->td2+q->td1;
                    if(i+n>=strlen(alf))q->d2=alf[(i+n)%strlen(alf)];
                    else q->d2=alf[i+n];
                    if(q->td2>q->td1)q->d2=toupper(q->d2);
                    b++;
                }
            }
        }
        if(q->d1_num||q->d1_esp||q->d2_num||q->d2_esp){
            if(q->d1_num){
                for(i=0;i<strlen(num);i++){
                    if(q->d1==num[i]&&a==0){
                        if(i+i>=strlen(num))q->d1=num[((i+i)%strlen(num))+1];
                        else q->d1=num[i+i];
                        a++;
                    }
                }
            }
            else if(q->d1_esp){
                for(i=0;i<strlen(car);i++){
                    if(q->d1==car[i]&&a==0){
                        if(i+i>=strlen(car))q->d1=car[((i+i)%strlen(car))+1];
                        else q->d1=car[i+i];
                        a++;
                    }
                }
            }
            else{
                for(i=0;i<strlen(alf);i++){
                    if(q->d1==alf[i]&&a==0){
                        if(i+i>=strlen(alf))q->d1=alf[((i+i)%strlen(alf))];
                        else q->d1=alf[i+i];
                        a++;
                    }
                }
            }
            if(q->d2_num){
                for(i=0;i<strlen(num);i++){
                    if(q->d2==num[i]&&b==0){
                        if(i+i>=strlen(num))q->d2=num[((i+i)%strlen(num))+1];
                        else q->d2=num[i+i];
                        b++;
                    }
                }
            }
            else if(q->d2_esp){
                for(i=0;i<strlen(car);i++){
                    if(q->d2==car[i]&&b==0){
                        if(i+i>=strlen(car))q->d2=car[((i+i)%strlen(car))+1];
                        else q->d2=car[i+i];
                        b++;
                    }
                }
            }
            else{
                for(i=0;i<strlen(alf);i++){
                    if(q->d2==alf[i]&&b==0){
                        if(i+i>=strlen(alf))q->d2=alf[((i+i)%strlen(alf))];
                        else q->d2=alf[i+i];
                        b++;
                    }
                }
            }
        }
        if(q->d2==' '){
            aux=q->d2;
            q->d2=q->d1;
            q->d1=aux;
        }
        else{
            aux=q->d1;
            q->d1=q->d2;
            q->d2=aux;
        }
        fputc(q->d1,arq_mod);
        fprintf(arq_mod,"%d",(q->td1+(strlen(alf)))+(q->td2+(strlen(alf))));
        fputc(q->d2,arq_mod);
        q=q->prox;
    }
    fclose(arq_mod);
    L->prox=NULL;
}
void descriptografar(){
    arq_mod=fopen("criptografado.txt","r");
    L->prox=NULL;
    char aux=fgetc(arq_mod);
    char d1,d2;
    int i=0,j,t1=0;
    while(aux!=EOF){
        i++;
        if(i==1)d1=aux;
        if(i==2){
            for(j=0;j<strlen(num);j++){
                if(aux==num[j])t1+=(j*100);
            }
        }
        if(i==3){
            for(j=0;j<strlen(num);j++){
                if(aux==num[j])t1+=(j*10);
            }
        }
        if(i==4){
            for(j=0;j<strlen(num);j++){
                if(aux==num[j])t1+=j;
            }
        }
        if(i==5)d2=aux;
        if(i==5){
            i=0;
            int a=0,b=0;
            struct lista *q;
            q=malloc(sizeof(struct lista));
            q->d1_esp=false;q->d1_num=false;q->d2_esp=false;q->d2_num=false;
            q->d1=d1;
            q->d2=d2;
            for(j=0;j<strlen(num);j++){
                if(q->d1==num[j]&&a==0){
                    q->td1=j;
                    q->d1_num=true;
                    a++;
                }
            }
            if(a==0){
                for(j=0;j<strlen(car);j++){
                    if(q->d1==car[j]&&a==0){
                        q->td1=j;
                        q->d1_esp=true;
                        a++;
                    }
                }
            }
            for(j=0;j<strlen(num);j++){
                if(q->d2==num[j]&&b==0){
                    q->td2=j;
                    q->d2_num=true;
                    b++;
                }
            }
            if(b==0){
                for(j=0;j<strlen(car);j++){
                    if(q->d2==car[j]&&b==0){
                        q->td2=j;
                        q->d2_esp=true;
                        b++;
                    }
                }
            }
            q->td2=0;
            q->td1=t1;
            t1=0;
            q->prox=L->prox;
            L->prox=q;
        }
        aux=fgetc(arq_mod);
    }
    fclose(arq_mod);
    arq_mod=fopen("auxiliar.txt","w");
    struct lista *q;
    q=malloc(sizeof(struct lista));
    q=L->prox;
    while(q!=NULL){
        int a=0,b=0;
        for(i=0;i<strlen(alf);i++){
            if(q->d1==alf[i])a++;
            if(q->d2==alf[i])b++;
        }
        t1=q->td1-((strlen(alf))*2);
        if((!q->d1_num)&&(!q->d1_esp)&&(!q->d2_num)&&(!q->d2_esp)){
            for(i=0;i<strlen(alf);i++){
                if(a!=0&&q->d2!=' '){
                    if(q->d1==alf[i]){
                        if(i<t1){
                            if((strlen(alf)-t1)+i<0||(strlen(alf)-t1)+i>strlen(alf)){
                                d2=alf[((2*strlen(alf))-t1)+i];
                                d1=alf[t1-(((2*strlen(alf))-t1)+i)];
                            }
                            else{
                                d2=alf[((strlen(alf))-t1)+i];
                                d1=alf[t1-(((strlen(alf))-t1)+i)];
                            }
                        }
                        if(i>t1){
                            d1=alf[t1-(i-t1)];
                            d2=alf[i-t1];
                        }
                        if(i==t1){
                            d2=alf[t1-i];
                            d1=alf[t1];
                        }
                    }
                }
                if(b!=0&&q->d1!=' '){
                    if(q->d2==alf[i]){
                        if(i<t1){
                            if((strlen(alf)-t1)+i<0||(strlen(alf)-t1)+i>strlen(alf)){
                                d1=alf[((2*strlen(alf))-t1)+i];
                                d2=alf[t1-(((2*strlen(alf))-t1)+i)];
                            }
                            else{
                                d1=alf[((strlen(alf))-t1)+i];
                                d2=alf[t1-(((strlen(alf))-t1)+i)];
                            }
                        }
                        if(i>t1){
                            d2=alf[t1-(i-t1)];
                            d1=alf[i-t1];
                        }
                        if(i==t1){
                            d1=alf[t1-i];
                            d2=alf[t1];
                        }
                    }
                }
            }
            if(q->d1==' '){
                d2=' ';
                d1=alf[t1];
            }
            if(q->d2==' '){
                d1=' ';
                d2=alf[t1];
            }
        }
        if(q->d1_num||q->d1_esp||q->d2_num||q->d2_esp){
            if(q->d1!=' '){
                if(q->d1_num){
                    for(i=0;i<strlen(num);i++){
                        if(q->d1==num[i]){
                            if(i%2==0)d2=num[i-(i/2)];
                            else d2=num[((i-1)+strlen(num))/2];
                        }
                    }
                }
                if(q->d1_esp){
                    for(i=0;i<strlen(car);i++){
                        if(q->d1==car[i]){
                            if(i%2==0)d2=car[i-(i/2)];
                            else d2=car[((i-1)+strlen(car))/2];
                        }
                    }
                }
                else{
                    for(i=0;i<strlen(alf);i++){
                        if(q->d1==alf[i]){
                            if(i%2==0)d2=alf[i-(i/2)];
                            else d2=alf[((i)+strlen(alf))/2];
                        }
                    }
                }
            }
            else d2=' ';
            if(q->d2!=' '){
                if(q->d2_num){
                    for(i=0;i<strlen(num);i++){
                        if(q->d2==num[i]){
                            if(i%2==0)d1=num[i-(i/2)];
                            else d1=num[((i-1)+strlen(num))/2];
                        }
                    }
                }
                if(q->d2_esp){
                    for(i=0;i<strlen(car);i++){
                        if(q->d2==car[i]){
                            if(i%2==0)d1=car[i-(i/2)];
                            else d1=car[((i-1)+strlen(car))/2];
                        }
                    }
                }
                else{
                    for(i=0;i<strlen(alf);i++){
                        if(q->d2==alf[i]){
                            if(i%2==0)d1=alf[i-(i/2)];
                            else d1=alf[((i)+strlen(alf))/2];
                        }
                    }
                }
            }
            else d1=' ';
        }
        fputc(d1,arq_mod);
        fputc(d2,arq_mod);
        q=q->prox;
    }
    fclose(arq_mod);
    remove("criptografado.txt");
    rename("auxiliar.txt","criptografado.txt");
    remove("auxiliar.txt");
}