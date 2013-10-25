#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char d; int l1,l2;
    
    while (cin>>d>>l1>>l2){
          
          //printf("%i %c %i = ",l1,d,l2);
          
          switch (d) {
                 case '+' : printf("%i\n",l1+l2); break;
                 case '-' : printf("%i\n",l1-l2); break;
                 case '*' : printf("%i\n",l1*l2); break;
                 case '/' : printf("%i\n",l1/l2); break;
                 case '%' : printf("%i\n",l1%l2); break;
                 }
          }
  
    system("PAUSE");
    return EXIT_SUCCESS;
}
