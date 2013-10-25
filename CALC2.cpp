#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int r[10],a,b; char d;
    
    while (cin>>d>>a>>b) {
          switch (d) {
                 case 'z' : r[a]=b; break;
                 case '+' : printf("%i\n",r[a]+r[b]); break;
                 case '-' : printf("%i\n",r[a]-r[b]); break;
                 case '*' : printf("%i\n",r[a]*r[b]); break;
                 case '/' : printf("%i\n",r[a]/r[b]); break;
                 case '%' : printf("%i\n",r[a]%r[b]); break;
                 }
          }
    system("PAUSE");
    return EXIT_SUCCESS;
}
