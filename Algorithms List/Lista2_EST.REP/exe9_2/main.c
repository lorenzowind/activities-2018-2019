#include <stdio.h>
#include <stdlib.h>

main()
{
    int IC=150, IJ=110, AN=0;

    while(IC>=IJ)
    {
        AN++;
        IC+=2;
        IJ+=3;
    }

    printf("Anos necessarios: %d", AN);
}
