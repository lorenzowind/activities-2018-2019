#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5],*p,i,j,aux;
    p=v;
    for(i=0;i<5;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if((*(p+j))>(*(p+i))){
                aux=(*(p+j));
                (*(p+j))=(*(p+i));
                (*(p+i))=aux;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
    return 0;
}
