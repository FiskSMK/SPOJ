#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int t,n,l,i,j,m;
    
    scanf("%i",&t);
    for (j=0;j<t;j++) {
        scanf("%i",&n);
        m=n/2+n%2;
        int tab[m];
        for (i=0;i<n;i++) {
            if (i%2) {
                     scanf("%i",&l);
                     printf("%i ",l);
                     } else {
                            scanf("%i",&tab[i/2]);
                            }
            }
        for (i=0;i<m;i++) {
            printf("%i ",tab[i]);
            }
        printf("\n");
        }
            
  
  system("PAUSE");	
  return 0;
}
