#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
  int N,X1,X2,Y1,Y2,D1,D2,T=0;

  scanf("%d", &N);
  for(int i=1;i<=N;i++)
  {
      scanf("%d", &X1);
      scanf("%d", &Y1);
      scanf("%d", &X2);
      scanf("%d", &Y2);
      D1=pow((X2-X1),2);
      D2=pow((Y2-Y1),2);
      T+=D1+D2;
  }
  printf("%d", T);
}
