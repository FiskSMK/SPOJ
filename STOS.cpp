#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int stos[10],i=-1; char d;
    while (cin>>d) {
          switch(d) {
                    case '+' : i++;
                    if (i<10) { 
                         cin>>stos[i];
                         printf(":)\n");
                         } else {
                                printf(":(\n");
                                i--;
                                }
                         break;
                    case '-' : //i--;
                    if(i>=0) {
                         printf("%i\n",stos[i]);
                         i--;
                         } else {
                                printf(":(\n");
                                //i++;
                                }
                         break;
                    }
          }
    system("PAUSE");
    return EXIT_SUCCESS;
}
