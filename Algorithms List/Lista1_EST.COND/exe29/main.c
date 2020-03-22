#include <stdio.h>
#include <stdlib.h>

main()
{
    float P, A, IMC;
    char N;

    printf("Informe o nome do paciente: ");
    scanf("%s", &N);
    printf("Informe o seu peso: ");
    scanf("%f", &P);
    printf("Informe a sua altura: ");
    scanf("%f", &A);

    IMC = (P/(A*A));

    if(IMC<20)
    {
        printf("\nO paciente esta abaixo do peso");
    }
    if(IMC>20&&IMC<25)
    {
        printf("\nO paciente esta no peso ideal");
    }
    if(IMC>25&&IMC<30)
    {
        printf("\nO paciente esta em excesso de peso");
    }
    if(IMC>30&&IMC<35)
    {
        printf("\nO paciente esta na obesidade");
    }
    if(IMC>35)
    {
        printf("\nO paciente esta na obesidade morbida");
    }
}
