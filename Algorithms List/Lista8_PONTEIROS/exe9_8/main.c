#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,*p;
    p=&a;
    p++;
    printf("%p\n",p);
    if(p==&b||p==&c||p==&d)printf("Esse endereco ja esta alocado\n");
    else printf("Endereco disponivel\n");
    return 0;
}
