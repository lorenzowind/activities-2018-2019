#include <stdio.h>
#include <stdlib.h>
void metade(float V[]){
    int i;
    for(i=0;i<10;i++){
        printf("V[%d]: %.2f\n", i+1,V[i]/2);
    }
}
int main()
{
    int i;
    float V[10];
    for(i=0;i<10;i++){
        printf("INFORME V[%d]: ",i+1);
        scanf("%f", &V[i]);
    }
    printf("METADE: \n");
    metade(&V);
    return 0;
}
