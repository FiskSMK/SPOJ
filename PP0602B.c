#include <stdio.h>

int main(void)
{
     int t,l,k,j,i,p;
     scanf("%i",&t);
     scanf("%i",&l);
     scanf("%i",&k);
     
     int tab[k][l];
     
     for (j=0;j<l;j++){
         for (i=0;i<k;i++){
             scanf("%i",&tab[j][i]);
             //printf("%i",tab[i][j]);
             }}
             
     printf("%i",tab[0][1]);
     for (i=2;i<k;i++) printf(" %i",tab[0][i]);
     printf(" %i\n",tab[1][k-1]);
     for (j=1;j<l-1;){
         printf("%i",tab[j][j-1]);
         for (i=1;i<k-1;i++) printf(" %i",tab[j][i]);
         printf(" %i\n",tab[j][++j]);
         }}
     printf("%i",tab[l-2][0]);
     for (i=2;i<k;i++) printf(" %i",tab[0][i]);
     printf(" %i\n",tab[1][k-1]);
     
  
  system("PAUSE");	
}
