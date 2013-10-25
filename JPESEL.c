#include <stdio.h>

int main()
{
    int t,i,mnozniki[]={1,3,7,9,1,3,7,9,1,3,1};
    long long p;
    int w=0;
    scanf("%i",&t);
    //printf("%i",mnozniki[10]);
    while (t--) {
          scanf("%lli",&p);
          w=0;
          //if (p>9999999999 && p<100000000000){
          for (i=10;i>=0;i--) {
              //printf("%i*%i+",p,mnozniki[i]);
              w+=p%10*mnozniki[i]%10;
              p/=10;
              }
          //} else w=1;
          if (w<=0 || w%10) printf("N\n",w); 
          else printf("D\n");
          }
  
  system("PAUSE");	
  return 0;
}
