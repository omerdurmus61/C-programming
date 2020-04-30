#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    int a=1;
    int faktoriyel=1;

    while(i<=10)
    {
      while(a<=i)
      {
          faktoriyel=faktoriyel*a;
            a++;
      }
        printf("%d sayisinin faktoriyeli %d\n",i,faktoriyel);
        i++;
    }
    return 0;
}
