#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[20][20],i,j,s=0;
    char m[20][20][5];
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            scanf("%s", &m[i][j]);
        }
    }
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            if(m[i+1][j][0]=='*'&&i<19)s++;
            if(m[i][j+1][0]=='*'&&j<19)s++;
            if(m[i+1][j+1][0]=='*'&&j<19&&i<19)s++;
            if(m[i+1][j-1][0]=='*'&&j>0&&i<19)s++;
            if(m[i-1][j+1][0]=='*'&&i>0&&j<19)s++;
            if(m[i-1][j-1][0]=='*'&&i>0&&j>0)s++;
            if(m[i][j-1][0]=='*'&&j>0)s++;
            if(m[i-1][j][0]=='*'&&i>0)s++;
            mat[i][j]=s;
            s=0;
        }
    }
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
