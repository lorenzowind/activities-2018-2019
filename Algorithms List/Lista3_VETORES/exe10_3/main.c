#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[15],i=0,a=0,c;
    do{
        printf("Numero: ");
        scanf("%d", &N[i]);
        if(N[i]==0)break;
        i++;
    }while(N[i]!=0||i!=15);
    for(c=0;c<i;c++){
        if(N[i-1]==N[c])a++;
    }
    printf("%d\n", a);
    return 0;
}
