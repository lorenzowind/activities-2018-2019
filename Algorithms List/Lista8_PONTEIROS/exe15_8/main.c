#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a=0;
    char str[20],str2[20],*p,*p2;
    printf("Informe string(20 caracteres): ");
    fflush(stdin);
    gets(str);
    fflush(stdin);
    p=str;
    p2=str2;
    for(i=0;i<strlen(str);i++){
        if(*(p+i)==' ')a++;
        if(a==0)(*(p2+i))=(*(p+i));
    }
    printf("String: %s\n",str);
    printf("Substring: %s\n",str2);
    return 0;
}
