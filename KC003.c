#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a,b,c;
    while (scanf("%f %f %f",&a,&b,&c)!=EOF){
          if(a+b>c && a+c>b && c+b>a) printf("1\n");
          else printf("0\n");
          }
  
  system("PAUSE");	
  return 0;
}
