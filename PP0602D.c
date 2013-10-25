#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,k,i;
    
    scanf ("%i %i",&n,&k);
    
    int tab[i];
    
    k%=n;
    
    for(i=0;i<n;i++) scanf("%i",&tab[i]);
    
    for (i=0;i<n;i++)  printf("%i ",tab[(i-k+1<0 ? n-k+i+1 : i-k+1)]);
  
  system("PAUSE");	
  return 0;
}
