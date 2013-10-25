#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,i,j,l[10000],jp;
    scanf("%i",&n);
    fread(l, sizeof(int), n, stdin);
    for (i=0;i<n;i++) {
        jp=1;
        if(l[i]==1) jp=0;
        for (j=2;j<l && jp;j++) {
            if (l[i]%j==0) {
                     jp=0;
                     }
            }
        if(jp) printf("%i: TAK\n",l[i]); else printf("%i: NIE\n",l[i]);
        }
    
  
  system("PAUSE");	
  return 0;
}

