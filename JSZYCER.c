#include <stdio.h>

int main()
{
    char c;
    
    while ( scanf("%1c",&c)!=EOF )
    {
          if((c>='A' && c<='Z') || (c>='a' && c<='z')) c= c+3 > 'Z' ? c+3-'Z'+'A'-1 : c+3;
          printf("%c",c);
    }
  
  system("PAUSE");	
  return 0;
}
