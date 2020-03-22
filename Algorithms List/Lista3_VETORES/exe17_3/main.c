#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,R[10],S[20],X[30],a,b=1,c,Y[20],Z[10];
    for(i=1;i<=10;i++){
        printf("R[%d]:",i);
        scanf("%d", &R[i]);
    }
    for(i=1;i<=20;i++){
        printf("S[%d]:",i);
        scanf("%d", &S[i]);
    }

    printf("VETOR X(UNIAO DOS VETORES):\n");
    for(i=1;i<=10;i++){
        X[i]=R[i];
    }
    for(i=1;i<=20;i++){
        X[i+10]=S[i];
    }
    for(i=1;i<=30;i++){
        printf("%d\n",X[i]);
    }

    printf("VETOR Y(ELEMENTOS COMUNS):\n");
    for(i=1;i<=10;i++){
        a=0;
        for(c=1;c<=20;c++){
            if(R[i]==S[c])a++;
        }
        if(a==1){
            Y[b]=R[i];
            b++;
        }
    }
    for(i=1;i<b;i++){
        printf("%d\n",Y[i]);
    }

    printf("VETOR Z(ELEMENTOS DE R QUE NAO ESTAO EM S):\n");
    b=1;
    for(i=1;i<=10;i++){
        a=0;
        for(c=1;c<=20;c++){
            if(R[i]==S[c])a++;
        }
        if(a==0){
            Z[b]=R[i];
            b++;
        }
    }
    for(i=1;i<b;i++){
        printf("%d\n",Z[i]);
    }
    return 0;
}
