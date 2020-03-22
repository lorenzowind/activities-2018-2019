#include <stdio.h>
#include <stdlib.h>

main()
{
    for(int i=1;i<=5;i++)
    {
        printf("Tabuada de %d: ", i);

        for(int c=0;c<=9;c++)
        {
            printf("\t%d", i*c);
        }

        printf("\n");
    }
}
