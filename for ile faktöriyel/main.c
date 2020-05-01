#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int carpim=1;

    for(i=1;i<5;i++)
    {
    carpim=carpim*i;
    }
    printf("1 den %d ye kadar olan sayilarin carpimi %d",i,carpim);
    return 0;
}
