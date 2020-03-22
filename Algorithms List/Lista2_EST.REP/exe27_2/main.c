#include <stdio.h>
#include <stdlib.h>

main()
{
    int N,B50=0,B10=0,B05=0,B01=0,i=1;

    do{
        scanf("%d", &N);
        if(N==0)
        {
            break;
        }
        do{

                N-=50;
                B50++;

        }while(N>=50);
        do{
            if(N>=10)
            {
                N-=10;
                B10++;
            }
        }while(N>=10);
        do{
            if(N>=5)
            {
                N-=5;
                B05++;
            }
        }while(N>=5);
        do{
            if(N>=1)
            {
                N-=1;
                B01++;
            }
        }while(N>=1);
        printf("Teste %d", i);
        printf("\n%d %d %d %d",B50,B10,B05,B01);
        printf("\n");
        i++;
        B50=0;
        B10=0;
        B05=0;
        B01=0;
    }while(N==0);
}
