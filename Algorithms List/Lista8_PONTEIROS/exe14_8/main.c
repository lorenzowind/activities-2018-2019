#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char v[10],*p;
    int cont=0,i;
    printf("Informe string(10 caracteres): ");
    fflush(stdin);
    gets(v);
    fflush(stdin);
    p=v;
    for(i=0;i<strlen(v);i++){
        if(toupper(*(p+i))=='W'||toupper(*(p+i))=='X'||toupper(*(p+i))=='Y')cont++;
    }
    if(cont>0)printf("Caracteres(W/X/Y) = %d\n",cont);
    else printf("Inexistente!\n");
    return 0;
}
