#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,M[5][5];
    float S=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &M[i][j]);
            if(M[i][j]%2!=0&&(i+j)>4)S+=(M[i][j]*M[i][j]);
        }
    }
    printf("MATRIZ: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("RAIZ QUADRADA DA SOMA DOS QUADRADOS DOS NUMEROS IMPARES ABAIXO DA DIAGONAL SECUNDARIA: %.2f\n", sqrt(S));
    return 0;
}
