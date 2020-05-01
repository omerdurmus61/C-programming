#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    for(a=4,b=6;a*b<=100;a++,b+=2)
    {
        printf("a nin degeri = %d.\n",a);
        printf("b nin degeri = %d.\n",b);
        printf("a*b nin degeri = %d.\n",a*b);
    }

    return 0;
}
