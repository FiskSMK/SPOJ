#include <stdio.h>


int main(int argc, char *argv[])
{
    int r[10],a,b; char d[2];
    
    while (scanf("%s %d %d",d,&a,&b)!=EOF) {
          switch (d[0]) {
                 case 'z' : r[a]=b; break;
                 case '+' : printf("%i\n",r[a]+r[b]); break;
                 case '-' : printf("%i\n",r[a]-r[b]); break;
                 case '*' : printf("%i\n",r[a]*r[b]); break;
                 case '/' : printf("%i\n",r[a]/r[b]); break;
                 case '%' : printf("%i\n",r[a]%r[b]); break;
                 }
          }
    system("PAUSE");
    return 0;
}
