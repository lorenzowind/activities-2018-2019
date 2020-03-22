#include <stdio.h>
#include <stdlib.h>
void volume(float R){
    printf("VOLUME DA ESFERA: %.2f\n", (4.0/3.0)*3.14*R*R*R);
}
int main()
{
    float R;
    printf("INFORME RAIO: ");
    scanf("%f", &R);
    volume(R);
    return 0;
}
