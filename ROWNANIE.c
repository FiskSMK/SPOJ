#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a,b,c,d;
    
    while (scanf("%f %f %f",&a,&b,&c)!=EOF) {
          d=b*b-4*a*c;
          if (d>0) printf("2\n");
		  else if (d<0) printf("0\n");
		  else printf("1\n");
    }
  
  system("PAUSE");	
  return 0;
}
