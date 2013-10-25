#include <stdio.h>

int main()
{
    int sz,il,l,i,ile;
    
    while (scanf("%i %i",&sz,&il)!=EOF)
    {
          ile=0;
          for (i=0;i<il;i++) 
          {
              scanf("%i",&l);
              if(l==sz) ile++;
          }
          printf("%i\n",ile);
    }
  
  system("PAUSE");	
  return 0;
}
