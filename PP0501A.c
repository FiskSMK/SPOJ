#include <stdio.h>
#include <stdlib.h>

int nwd(int a, int b) {
    while (a!=b) {
          if (a>b) a-=b;
          else b-=a;
          }
    return a;
}

int main(int argc, char *argv[])
{
    int t,a,b,i;
    
    scanf("%i",&t);
    
    for (i=0;i<t;i++) {
        scanf("%i",&a);
        scanf("%i",&b);
        printf("%i\n",nwd(a,b));
        }
  
  system("PAUSE");	
  return 0;
}
