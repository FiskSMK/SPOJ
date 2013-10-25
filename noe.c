#include <stdio.h>

int main()
{
    int tab[500000][2],ile=0,i=0,z;
    //printf("test\n");
    while (scanf("%i",&z)!=EOF) {
          if (ile==0) {
                      tab[0][0]=z;
                      tab[0][1]=1;
                      }
          for (i=0;i<ile;i++){
              if(tab[i][0]==z) {
            	 tab[i][1]++;
            	 i=ile;
            	 }
              }
          if (i==ile) {
                      tab[ile][0]=z;
                      tab[ile][1]=1;
                      ile++;
                      }
          }
    //printf("%i\n",ile);
    for(i=0;i<ile;i++) if(tab[i][1]==1) printf("%i\n",tab[i][0]);
    
              
  
  
  return 0;
}
