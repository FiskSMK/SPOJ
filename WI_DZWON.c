#include <stdio.h>

int main()
{
    int h,m,p;
    scanf("%i:%i",&h,&m);
    printf("%.2i:%.2i,",h,m);
    while (scanf("%i",&p)!=EOF) {
          //printf("%.2i:%.2i,",h,m);
          m+=45;
          if (m>=60) {
             m-=60;
             h++;
             if (h>=24) h%=24;
             }
          printf("%.2i:%.2i,",h,m);
          m+=p%60;
          h+=(p/60)%24;
          if (m>=60) {
             m-=60;
             h++;             
             }
          if (h>=24) h%=24;
          printf("%.2i:%.2i,",h,m);
    }
    m+=45;
          if (m>=60) {
             m-=60;
             h++;
             if (h>=24) h%=24;
             }
    printf("%.2i:%.2i",h,m);
          
  
  system("PAUSE");	
  return 0;
}
