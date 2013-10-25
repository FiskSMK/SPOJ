#include <stdio.h>

int main()
{
    int n,t,x,i,y;
    
    scanf("%i",&t);
    while (t--)
    {
          scanf("%i %i %i",&n,&x,&y);
          
          for (i=1;i<=n;i++) if ( i%x==0 && i%y) printf("%i ",i);
    }
  
  system("PAUSE");	
  return 0;
}
