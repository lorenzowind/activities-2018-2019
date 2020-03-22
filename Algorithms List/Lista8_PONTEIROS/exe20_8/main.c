#include <stdio.h>
#include <stdlib.h>
struct cidade{
    char nome[30],endereco[50];
    int idade;
};
struct estado{
    struct cidade FLO;
    struct cidade CRI;
    struct cidade ARA;
    struct cidade JAG;
    struct cidade BNO;
    struct cidade TUB;
};
struct pais{
    struct estado SC;
    struct estado PR;
}BR;
int main()
{
    struct pais *p;
    return 0;
}
