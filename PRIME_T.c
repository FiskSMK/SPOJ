#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,i,j,l,jp;
    scanf("%i",&n);
    for (i=0;i<n;i++) {
        scanf("%i",&l);
        jp=1;
        if(l==1) jp=0;
        for (j=2;j<l && jp;j++) {
            if (l%j==0) {
                     jp=0;
                     }
            }
        if(jp) printf("TAK\n"); else printf("NIE\n");
        }
    
  
  system("PAUSE");	
  return 0;
}
