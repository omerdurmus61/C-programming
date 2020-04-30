#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0;i<100;i++)
    {
        if(i%7==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
