#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int i=0,bs=0; string s; char c;
    //printf("%i\n",'A'-'a');
    while ((c=getchar())!=EOF) {
          if(bs && c<='z' && c>='a') c-=32;
          if (c!=' ') {
                   cout<<c;
                   bs=0; }
                   else bs=1;
          }
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
