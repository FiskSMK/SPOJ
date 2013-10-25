#include <stdio.h>
#include <stdlib.h>

int k;

char generuj (char znak, int zostalo, char * znaki){
     printf("%c",znak);
     if (zostalo<1) return 0;
     int i,p=0; char zn[zostalo];
     for (i=0;i<zostalo;i++) if(znaki[i]!=-1) znaki[i]=zn[i+p];
                             else p--;
     zostalo--;
     for (i=0;i<k;i++){
         if (znaki[i]!=-1){
            if (znaki[i]==znak) znaki[i]=-1;
            else generuj(znaki[i],zostalo,znaki);
            }
         
         }
     
     return 0;
     }

int main(int argc, char *argv[])
{
    int t,i,j;
    scanf("%i",&t);
    //int k[t];
    for (i=0;i<t;i++){
        scanf("%i",k);
        
        char znaki[k];
        for (j=0;j<k;j++) znaki[j]='a'+j;
        
        generuj('',k,znaki);
        
        
        
        
        
        }    
  
  system("PAUSE");	
  return 0;
}
