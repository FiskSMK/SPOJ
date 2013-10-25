#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char d; int l1,l2;
    
    while (scanf("%c",&d)!=EOF){
          scanf("%i",&l1);
          scanf("%i",&l2);
          
          printf("%i %c %i = ",l1,d,l2);
          
          switch (d) {
                 case '+' : printf("%i\n",l1+l2); break;
                 case '-' : printf("%i\n",l1-l2); break;
                 case '*' : printf("%i\n",l1*l2); break;
                 case '/' : printf("%i\n",l1/l2); break;
                 case '%' : printf("%i\n",l1%l2); break;
                 }
          }
  
  system("PAUSE");	
  return 0;
}
