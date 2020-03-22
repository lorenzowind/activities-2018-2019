#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Informe N: ");
    scanf("%d", &N);
    int v[N],*p,i,j,aux;
    p=v;
    for(i=0;i<N;i++){
        printf("V[%d]: ",i);
        scanf("%d",p+i);
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if((*(p+j))>(*(p+i))){
                aux=(*(p+j));
                (*(p+j))=(*(p+i));
                (*(p+i))=aux;
            }
        }
    }
    for(i=0;i<N;i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
    if(N%2==0)printf("MEDIANAS = %d %d\n", *(p+(N/2)-1),*(p+(N/2)));
    else printf("MEDIANA = %d\n",*(p+(N/2)));
    return 0;
}
