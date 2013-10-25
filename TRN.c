#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,m,i,j;
    scanf("%i",&n);
    scanf("%i",&m);
    int mac[n][m];
    for (i=0;i<n;i++){
        for(j=0;j<m;j++) scanf("%i",&mac[i][j]);
        }
        
        
    for (i=0;i<m;i++){
        printf("%i",mac[0][i]);
        for(j=1;j<n;j++) printf(" %i",mac[j][i]);
        printf("\n");
        }
        
        
        

    
  
  system("PAUSE");	
  return 0;
}
