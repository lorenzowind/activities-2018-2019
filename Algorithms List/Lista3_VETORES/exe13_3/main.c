#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char N[20], D[20]="";
    gets(N);
    for(i=0;i<20;i++)
    {
        if(N[i]=='s'&&N[i+1]=='s')strcat(D,"SS ");
        if(N[i]=='r'&&N[i+1]=='r')strcat(D,"RR ");
        if(N[i]=='s'&&N[i+1]=='c')strcat(D,"SC ");
        if(N[i]=='x'&&N[i+1]=='c')strcat(D,"XC ");
        if(N[i]=='n'&&N[i+1]=='h')strcat(D,"NH ");
        if(N[i]=='l'&&N[i+1]=='h')strcat(D,"LH ");
        if(N[i]=='c'&&N[i+1]=='h')strcat(D,"CH ");
    }
    printf("Digrafo encontrado: %s\n", D);
    return 0;
}
