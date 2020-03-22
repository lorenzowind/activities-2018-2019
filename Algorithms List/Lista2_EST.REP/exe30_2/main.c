#include <stdio.h>
#include <string.h>

int main()
{
    int PQ=0,CQ=0,i,c=0,PI=0;
    char X[1],T[1000];
    gets(X);
    gets(T);
    for(i=0;i<strlen(T);i++)
    {
        if(T[i]==' ')
        {
            PI=0;
        }
        else
        {
            if(PI==0)
            {
                PQ++;
                c=0;
            }
            PI=1;
            if(X[0]==T[i]&&c!=1)
            {
                CQ++;
                c++;
            }
        }
    }
    printf("%.1f\n",((float)(CQ*100)/PQ));
    return 0;
}
