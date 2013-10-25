#include <stdio.h>

int main(int argc, char *argv[])
{
    int t,v1,v2;
    scanf("%i",&t);
    while (t--) {
          scanf("%i%i",&v1,&v2);
          printf("%i\n",2*v1*v2/(v1+v2));
          }         
  
  system("PAUSE");	
  return 0;
}
