#include <stdio.h>

int main(int argc, char *argv[])
{
    int bs=0; char c;
    while ((c=getchar())!=EOF) {
          if(bs && c<='z' && c>='a') c-=32;
          if (c!=' ') {
                   printf("%c",c);
                   bs=0; }
                   else bs=1;
          }
          
    
  
  system("PAUSE");	
  return 0;
}
