#include <stdio.h>
#include <stdlib.h>
void imprimir(int n){
    int s=2*n-1,i,j;
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            if(i<s/2&&i+j>=s/2&&j-i<=s/2)printf("*");
            else if(i>s/2&&i+j>s/2+1&&i+j<s+s/2&&i-j<=s/2)printf("*");
            else if(i==s/2||j==s/2)printf("*");
            else printf(".");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("INFORME NUMERO: ");
    scanf("%d", &n);
    imprimir(n);
    return 0;
}
