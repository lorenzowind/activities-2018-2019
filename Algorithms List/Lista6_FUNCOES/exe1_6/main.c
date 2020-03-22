#include <stdio.h>
#include <stdlib.h>
void adicao(int A, int B){
    printf("RESULTADO: %d\n\n", A+B);
}
void subtracao(int A, int B){
    printf("RESULTADO: %d\n\n", A-B);
}
void divisao(int A, int B){
    printf("RESULTADO: %.2f\n\n", (float)A/B);
}
void multiplicacao(int A, int B){
    printf("RESULTADO: %d\n\n", A*B);
}
void exponenciacao(int A, int B){
    int i,t=A;
    for(i=1;i<B;i++){
        t*=A;
    }
    printf("RESULTADO: %d\n\n", t);
}
int main()
{
    int op,A,B;
    do{
        printf("1 - ADICAO\n");
        printf("2 - SUBTRACAO\n");
        printf("3 - DIVISAO\n");
        printf("4 - MULTIPLICACAO\n");
        printf("5 - EXPONENCIACAO\n");
        printf("6 - RAIZ QUADRADA\n");
        printf("7 - SAIR\n");
        printf("INFORME UMA OPCAO: ");
        scanf("%d", &op);
        if(op!=5&&op!=6&&op!=7){
            printf("INFORME NUMERO: ");
            scanf("%d", &A);
            printf("INFORME NUMERO: ");
            scanf("%d", &B);
        }
        if(op==5){
            printf("INFORME NUMERO: ");
            scanf("%d", &A);
            printf("INFORME EXPOENTE: ");
            scanf("%d", &B);
        }
        if(op==6){
            printf("INFORME NUMERO: ");
            scanf("%d", &A);
        }
        if(op==7)break;
        switch(op){
        case 1:
            adicao(A,B);
            break;
        case 2:
            subtracao(A,B);
            break;
        case 3:
            divisao(A,B);
            break;
        case 4:
            multiplicacao(A,B);
            break;
        case 5:
            exponenciacao(A,B);
            break;
        case 6:
            printf("RESULTADO: %.2f\n\n", sqrt(A));
            break;
        case 7: break;
        }
    }while(op!=7);
    return 0;
}
