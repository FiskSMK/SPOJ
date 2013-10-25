#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int t,n,l,i,j,s;
    scanf("%i",&t);
    for (i=0;i<t;i++) {
        scanf("%i",&n);
        s=0;
        for (j=0;j<n;j++) {
            scanf("%i",&l);
            s+=l;
            }
        printf("%i\n",s);
        }
            
    
  
  system("PAUSE");	
  return 0;
}
