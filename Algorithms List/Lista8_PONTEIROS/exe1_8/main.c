#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1, *p2, a, b;
    printf("Informe numero: ");
    scanf("%d", &a);
    printf("Informe numero: ");
    scanf("%d", &b);
    p1=&a;
    p2=&b;
    if(p1>p2)printf("Maior: %p\n",p1);
    else printf("Maior: %p\n",p2);

}
