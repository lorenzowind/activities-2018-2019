#include <stdio.h>
#include <stdlib.h>
double fat(int n){
    if(n==0)return 1;
    else return n*fat(n-1);
}
double fib(int n){
    if(n==0||n==1)return n;
    else return fib(n-1)+fib(n-2);

}
int main()
{
    int n;
    printf("FATORIAL\n");
    printf("INFORME NUMERO: ");
    scanf("%d", &n);
    printf("RESULTADO: %.0lf\n",fat(n));
    printf("FIBONACCI\n");
    printf("INFORME NUMERO: ");
    scanf("%d", &n);
    printf("RESULTADO: %.0lf\n",fib(n));
    return 0;
}
