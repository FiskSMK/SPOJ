#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int t,n,i,j,l,ll;
    
    scanf("%i",&t);
    for (j=0;j<t;j++) {
        scanf("%i",&n);
        scanf("%i",&ll);
        for (i=0;i<n-1;i++) {
            scanf("%i",&l);
            printf("%i ",l);
            }
        printf("%i\n",ll);
        }
        
  
  system("PAUSE");	
  return 0;
}
