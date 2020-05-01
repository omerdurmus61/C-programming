#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;
    {
        int x=61;
        printf ("x = %d",x);
    }
    return 0;
}
