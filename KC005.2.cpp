#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string a,b,c,d,e,f,g; int w,i,ig;
    int dz,mi,ro;
    
    //
    
    while (scanf("%*s %s %*s %s %*s %*s %i-%i-%i",b,d,ro,mi,dz)!=EOF) {
          w=0; ig=1; i=1;
          
          if(b[0]<'A' || b[0]>'Z') ig=0;
          while (b[i]!=';' && ig) {
              //cout<<i;
              if(b[i]<'a' || b[i]>'z') ig=0;
              i++;
              }
          if (ig) w++;
          
          //ig=(int) b[0];
          
          i=1;
          
          if(d[0]<'A' || d[0]>'Z') ig=0;
          while (d[i]!=';' && ig) {
              //cout<<i;
              if(d[i]<'a' || d[i]>'z') ig=0;
              i++;
              }
          if (ig) w++;
          
          //if ((g[0]=='2' && g[1]=='0' && g[2]=='0' g[3]=='0') || (g[0]=='1' && g[1]>='0' && g
          
          if(ro>=1900 && ro<=2000 && mi>=1 && mi<=12 && dz>0 && dz<32) w++;
                   
          cout<<w<<" "<<ig<<endl;
          
          cout<<b<<" "<<d<<endl;
          }
          
    system("PAUSE");
    return EXIT_SUCCESS;
}
