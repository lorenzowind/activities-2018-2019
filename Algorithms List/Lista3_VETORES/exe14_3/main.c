#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, CPF,pr[20]={0},c,prm;
    char N[20], P[20][20];
    for(i=0;i<20;i++)
    {
        printf("Nome: ");
        scanf("%s", &N);
        fflush(stdin);
        printf("CPF: ");
        scanf("%d", &CPF);
        printf("Profissao: ");
        scanf("%s", &P[i]);
        fflush(stdin);
    }
    for(i=0;i<20;i++)
    {
        for(c=0;c<20;c++)
        {
            if(strcmp(P[i],P[c])==0)pr[i]++;
        }
    }
    printf("PROFISSOES QUE MAIS SE REPETEM\n");
    for(i=0;i<20;i++)
    {
        for(c=0;c<20;c++)
        {
            if(pr[i]<pr[c])continue;
        }
        printf("%s: ", P[i]);
        printf("%d\n", pr[i]);
        prm=pr[i];
        break;
    }
    for(i=0;i<20;i++)
    {
        for(c=0;c<20;c++)
        {
            if(pr[i]<pr[c])continue;
        }
        if(pr[i]!=prm)
        {
            printf("%s: ", P[i]);
            printf("%d\n", pr[i]);
            break;
        }
    }
    return 0;
}
