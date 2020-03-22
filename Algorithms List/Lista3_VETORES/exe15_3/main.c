#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char N[80],pl[5];
    int i,b=0,a=0,plc=0;
    gets(N);
    fflush(stdin);
    scanf("%s", &pl);
    fflush(stdin);
    for(i=0;i<strlen(N);i++)
    {
        if(N[i]==' ')b++;
        if(N[i]=='a')a++;
        if(N[i]==pl[0]&&N[i+1]==pl[1])plc++;
    }
    printf("Caracteres brancos: %d\n", b);
    printf("Letra A: %d\n", a);
    printf("Par de letras: %d\n", plc);
    return 0;
}
