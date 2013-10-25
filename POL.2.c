#include <stdio.h>
#include <string.h>

int main()
{
    char s[2001]; int t,i;
    scanf("%i",&t);
    while (t--) {
          scanf("%s",s);
          s[strlen(s)/2]='\0';
          printf("%s\n",s);
          }
  
  system("PAUSE");	
  return 0;
}
