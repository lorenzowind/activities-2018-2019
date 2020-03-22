#include <stdio.h>
#include <stdlib.h>
int MDC(int A,int B){
    int aux;
    if(B>A){
        aux=B;
        B=A;
        A=aux;
    }
    if(A==B)return A;
    else return MDC(A-B,B);
}
int main()
{
    int aux,A,B;
    printf("INFORME NUMERO: ");
    scanf("%d", &A);
    printf("INFORME NUMERO: ");
    scanf("%d", &B);
    printf("MDC = %d\n", MDC(A,B));
    return 0;
}
