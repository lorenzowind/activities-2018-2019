#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j;
    printf("Informe N: ");
    scanf("%d", &N);
    int *p[N][N];
    printf("Informe Matriz:\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            p[i][j]=malloc(sizeof(int));
            scanf("%d", p[i][j]);
        }
    }
    printf("Diagonal Principal: ");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i==j)printf("%d ",*(p[i][j]));
        }
    }
    printf("\n");
    return 0;
}
