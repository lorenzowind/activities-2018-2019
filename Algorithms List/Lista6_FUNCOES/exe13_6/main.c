#include <stdio.h>
#include <stdlib.h>
float celsius(float T){
    return ((5.0/9.0)*(T-32));
}
int main()
{
    float T;
    printf("INFORME TEMPERATURA(FAHRENHEIT): ");
    scanf("%f", &T);
    printf("%.2f CELSIUS\n", celsius(T));
    return 0;
}
