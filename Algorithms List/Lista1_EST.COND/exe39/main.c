#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=1,N,D;
    do{
        scanf("%d", &N);
        if(N==-1)
        {
            exit(1);
        }
        D=(pow(2,N)+1)*(pow(2,N)+1);
        printf("Teste %d\n", i);
        printf("%d\n\n", D);
        i++;
    }while(N!=-1);
    return 0;
}
