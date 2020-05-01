#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10];
    int i;
    for(i=0;i<10;i++)
    {
        dizi[i]=i*3;
        printf("dizinin %d. elemani %d\n",i+1,dizi[i]);
    }
    return 0;
}
