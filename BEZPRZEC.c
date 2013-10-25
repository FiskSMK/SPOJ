#include <stdio.h>

int main() 
{
  if (int i = 1) 
  {
    while (i <= 100) 
    {
      if (i % 3 == 0 || i % 5 == 0) 
      {
        if (printf("NUM\n")) { }
      } 
      else 
      {
        if (int j = 1) 
        {
          if (int flag = 1) 
          {
            while (flag && j <= i) 
            {
              if ((i/j) % 10 == 3 || (i/j) % 10 == 5) 
              {
                if (printf("BUM\n")) { }
                if (flag = 0) { }
              }
              if (j *= 10) { }
            }
            if (flag) 
            {
              if (printf("%d\n", i)) { }
            }
          }
        }
      }
      if (i++) {}
    }
  }
}
