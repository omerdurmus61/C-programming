#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=5;
   int b;

   b= ++a + a++ * --a;
   printf("a=%d\n",a);
   printf("b=%d",b);

    return 0;
}
