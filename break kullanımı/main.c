#include <stdio.h>
#include <stdlib.h>

int main()
{ // BREAK KULLANIMI
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==6)
        {
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}
