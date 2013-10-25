#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    char tab[1000][25];
    tab[0][]="zero";
    tab[1][]="jeden";
    tab[2][]="dwa";
    tab[3][]="trzy";
    tab[4][]="cztery";
    tab[5][]="piec";
    tab[6][]="szesc";
    tab[7][]="siedem";
    tab[8][]="osiem";
    tab[9][]="dziewiec";
    tab[10][]="dziesiec";
    tab[11][]="jedenascie";
    tab[12][]="dwanascie";
    tab[13][]="trzynascie";
    tab[14][]="czternascie";
    tab[15][]="pietnascie";
    tab[16][]="szesnascie";
    tab[17][]="siedemnascie";
    tab[18][]="osiemnascie";
    tab[19][]="dziewietnascie";
    tab[20][]="dwadziescia";
    tab[30][]="trzydziesci";
    tab[40][]="czterdziesci";
    tab[50][]="piecdziesiat";
    tab[60][]="szescdziesiat";
    tab[70][]="siedemdziesiat";
    tab[80][]="osiemdziesiat";
    tab[90][]="dziewiecdziesiat";
    tab[100][]="sto";
    tab[200][]="dwiescie";
    tab[300][]="trzysta";
    tab[400][]="czterysta";
    tab[500][]="piecset";
    tab[600][]="szescset";
    tab[700][]="siedemset";
    tab[800][]="osiemset";
    tab[900][]="dziewiecset";
    
    long long d;
    scanf("%i",&t);
    char calosc[99999]="",kopia[99999]="";
    int d1,d2;
    
    while (t--) {
          scanf("%ll,&d);
          calosc[]="";
          while (d>0) {
                d1=d%100;
                d/=100;
                if (d1>20) {
                           d2=d1%10;
                           d1=d1-d2;
                           strcpy(kopia,calosc);
                           strcpy(calosc,tab[d1]);
                           strcpy(calosc+strlen(calosc)," ");
                           strcpy(calosc+strlen(calosc),tab[d2]);
                           strcpy(calosc+strlen(calosc)," ");
                           strcpy(calosc+strlen(calosc),kopia);
                } else {
                       strcpy(kopia,calosc);
                       strcpy(calosc,tab[d1]);
                       strcpy(calosc+strlen(calosc)," ");
                       strcpy(calosc+strlen(calosc),kopia);
                       }
                }
    }
                
                
  
  system("PAUSE");	
  return 0;
}
