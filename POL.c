#include <stdio.h>
#include <string.h>

int main()
{
    char s[2001]; int t,i,l;
    scanf("%i",&t);
    while (t--) {
          scanf("%s",s);
          l=strlen(s)/2;
          for (i=0;i<l;i++) printf("%c",s[i]);
          printf("\n");
          }
  
  system("PAUSE");	
  return 0;
}
