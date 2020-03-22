#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[5]={"SERA"},str2[5]={"QUE#"},str3[5]={"#E##"},str4[5]={"ISTO"};
    int i,j;
    char m[4][4][5];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%s", &m[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==0)if(m[i][j][0]!=str1[j])m[i][j][0]=str1[j];
            if(i==1)if(m[i][j][0]!=str2[j])m[i][j][0]=str2[j];
            if(i==2)if(m[i][j][0]!=str3[j])m[i][j][0]=str3[j];
            if(i==3)if(m[i][j][0]!=str4[j])m[i][j][0]=str4[j];
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%c ", m[i][j][0]);
        }
        printf("\n");
    }

    return 0;
}
