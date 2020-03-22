#include <stdio.h>
#include <stdlib.h>

main()
{
    int M[10],A[10],RP=0,AP=0,RF=0,PR=0,i;
    float MF[10],N1,N2,S=0,MN=0,PN=0;

    for(i=1;i<=10;i++)
    {
        printf("Numero da matricula: ");
        scanf("%d", &M[i]);
        printf("Nota 1: ");
        scanf("%f", &N1);
        printf("Nota 2: ");
        scanf("%f", &N2);
        printf("Numero de aulas frequentadas: ");
        scanf("%d", &A[i]);
        MF[i]=((float)(N1+N2)/2);
        if(i==1)
        {
            MN=MF[i];
            PN=MF[i];
        }
        if(MF[i]>MN)
        {
            MN=MF[i];
        }
        if(MF[i]<PN)
        {
            PN=MF[i];
        }
        if(MF[i]>=6&&A[i]>=65)
        {
            AP++;
        }
        if(MF[i]<6||A[i]<65)
        {
            RP++;
        }
        if(A[i]<65)
        {
            RF++;
        }
        S+=MF[i];
    }
    PR=RF*0.10;
    S/=10;
    for(i=1;i<=10;i++)
    {
        printf("\nAluno: %d", M[i]);
        printf("\nMedia final: %f", MF[i]);
        printf("\nAulas frequentadas: %d", A[i]);
        if(MF[i]>=6&&A[i]>=65)
        {
            printf("\nAPROVADO!");
        }
        if(MF[i]<6||A[i]<65)
        {
            printf("\nREPROVADO!");
        }
    }
    printf("\n\nMaior nota: %f", MN);
    printf("\nMenor nota: %f", PN);
    printf("\nMedia da turma: %f", S);
    printf("\nAlunos reprovados: %d", RP);
    printf("\nPorcentagem de alunos reprovados por falta: %d", PR);
}
