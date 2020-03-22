#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,a=0,e=0,i=0,o=0,u=0;
    char N[20];
    gets(N);
    for(c=0;c<20;c++)
    {
        if(N[c]=='a')a++;
        if(N[c]=='e')e++;
        if(N[c]=='i')i++;
        if(N[c]=='o')o++;
        if(N[c]=='u')u++;
    }
    printf("A = %d vez(es)\n", a);
    printf("E = %d vez(es)\n", e);
    printf("I = %d vez(es)\n", i);
    printf("O = %d vez(es)\n", o);
    printf("U = %d vez(es)\n", u);
    return 0;
}
