#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int n,j,l,jp,k,m,t,ti;
    scanf("%i",&t);
    for (ti=0;ti<t;ti++){
    scanf("%i",&n);
    scanf("%i",&m);
    for (k=n;k<=m;k++){
        jp=1;
        if(k==1) jp=0;
        for (j=2;j<k && jp;j++) {
            if (k%j==0) {
                     jp=0;
                     break;
                     }
            }
        if(jp) printf("%i\n",k);
        }
        printf("\n");
        }
    
  
  system("PAUSE");	
  return 0;
}
