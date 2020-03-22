#include <stdio.h>
#include <stdlib.h>
void circulo(float R){
    printf("AREA: %.2f\n\n", 3.14*R*R);
}
void triangulo(float B, float A){
    printf("AREA: %.2f\n\n", (B*A)/2);
}
void paralelo(float B, float b, float A){
    printf("AREA: %.2f\n\n", ((B+b)*A)/2);
}
int main()
{
    int op;
    float A,B,b,R;
    do{
        printf("1 - CIRCULO\n");
        printf("2 - TRIANGULO\n");
        printf("3 - PARALELOGRAMA\n");
        printf("4 - SAIR\n");
        printf("INFORME UMA OPCAO: ");
        scanf("%d", &op);
        if(op==1){
            printf("INFORME RAIO: ");
            scanf("%f", &R);
            circulo(R);
        }
        if(op==2){
            printf("INFORME BASE: ");
            scanf("%f", &B);
            printf("INFORME ALTURA: ");
            scanf("%f", &A);
            triangulo(B,A);
        }
        if(op==3){
            printf("INFORME BASE MAIOR: ");
            scanf("%f", &B);
            printf("INFORME BASE MENOR: ");
            scanf("%f", &b);
            printf("INFORME ALTURA: ");
            scanf("%f", &A);
            paralelo(B,b,A);
        }
        if(op==4)break;
        }while(op!=4);
    return 0;
}
