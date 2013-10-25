#include <stdio.h>

int main()
{
    int N,a,b,a0,b0;
    scanf("%i",&N);
    while (N--) {
          scanf("%i %i",&a,&b);
          a0=a; b0=b;
          while (a!=b) {
                if (a>b) a-=b;
                else b-=a;
                }
          printf("%i\n",a0*b0/a);
          }
  
  system("PAUSE");	
  return 0;
}
