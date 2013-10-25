#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n,i,D;
    scanf("%i",&D);
    for (i=0;i<D;i++){
        scanf("%i",&n);
        if(n>9) printf("0 0\n");
        else if(n<=1) printf("0 1\n");
        else switch(n)
        {
             case 2: printf("0 2\n"); break;
             case 3: printf("0 6\n"); break;
             case 4: printf("2 4\n"); break;
             case 5: printf("2 0\n"); break;
             case 6: printf("2 0\n"); break;
             case 7: printf("4 0\n"); break;
             case 8: printf("2 0\n"); break;
             case 9: printf("8 0\n"); break;
             }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
