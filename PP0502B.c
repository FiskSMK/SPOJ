#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int t,i,n,j;
    
    scanf("%i",&t);
    for (j=0;j<t;j++) {
        scanf("%i",&n);
        int tab[n];
        for (i=0;i<n;i++) scanf("%i",&tab[i]);
        for (i--;i>=0;i--) printf("%i ",tab[i]);
        printf("\n");
        }
  
  system("PAUSE");	
  return 0;
}
