#include <stdio.h>
#include <stdlib.h>

int main()
{
    char V[30], aux[2];
    int i;
    for(i=0;i<30;i++){
        scanf("%c", &V[i]);
        if(i>=1&&V[i]<V[i-1]){
            aux[0]=V[i];
            V[i]=V[i-1];
            V[i-1]=aux[0];
        }
    }
    for(i=0;i<30;i++){
            if(i%2==0){
                printf("%c", V[i]);
            }
    }
    return 0;
}
